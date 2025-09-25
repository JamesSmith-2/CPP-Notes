// CSCI 1300 Fall 2023
// Author: James Smith
// TA: Pawin Taechoyotin
// Question 6

#include <iostream>
#include <string>
#include <cassert>

using namespace std;
char shiftChar(char c, int shift)
{
    if (c >= 'a' && c <= 'z')
    {
        if(shift > 0) // if youre shifting by a positive number
        {
        for(int i = 0; i < shift; i++)
        {
            if(c == 'z')
            {
                c = 'a';
            }
            else
            {
                c++;
            }

        }
        } 
    }
    return c;
}
int getMethod2ShiftAmount(string key1)
{
    int lenOfKey = key1.length();
    int shift = 0;


    for(int i=0; i<lenOfKey; i++)
    {
        if (key1[i] == 'a' || key1[i] == 'e' || key1[i] == 'i' || key1[i] == 'o' || key1[i] == 'u' || key1[i] == 'y')
        {
            shift++;
        }}
    shift = shift + lenOfKey;
    shift =  shift% 26;
    return shift;
}

int getMethod3ShiftAmount(string key1, string key2)
{
    int lenOfKey1 = key1.size();
    int lenOfKey2 = key2.size();
    int match = 0;
    int shift = 0;
    for (int i = 0; i <lenOfKey1; i++ )
    {
        for (int j= 0; j< lenOfKey2; j++)
        {
            if((key1[i]) == (key2[j]))
            {
                match++;
            }
        }
    }
    shift = match % 26;
    return shift;
}

char encryptChar(char c, int method_choice, string key1, string key2)
{   char final;
    int temp;
    if (c < 'a' && c > 'z')
    {
        cout << "Invalid encryption method" << endl;
        return c;
    }
    if (method_choice > 3)
    {
        cout << "Invalid encryption method" << endl;
        return c;
    }
    if (method_choice <= 0)
    {
        cout << "Invalid encryption method" << endl;
        return c;
    }

    if((method_choice == 1))
    {
        final = shiftChar(c, 1);
    }

    if ((method_choice == 2))
    {
        temp = getMethod2ShiftAmount(key1);
        final = shiftChar(c, temp);
    }

    if ((method_choice == 3))
    {
        temp = getMethod3ShiftAmount(key1, key2);
        final = shiftChar(c, temp);
    }
    return final;
 }
 string encryptMessage(string message, int method_choice, string key1, string key2)
 { 
    int messagelen = message.length();
    string final;

    switch(method_choice)
    {
    case 1:
    case 2:
    case 3:
    for (int i =0; i < messagelen; i++)
    {
    final.append(string(1, encryptChar(message[i], method_choice, key1, key2)));
    }
    break;

    case 4:

        for (int i = 0; i < messagelen; i++)
        {
        if(i%3 ==0)
        {
            final.append(string(1, encryptChar(message[i], 1, key1, key2))); // final.append is adding the character to the "final" string and is appending the new 'encryptChar' character to the end
        }
        if(i%3 ==1)
        {
            final.append(string(1,encryptChar(message[i], 2, key1, key2)));
        }
        if(i%3 ==2)
        {
            final.append(string(1,encryptChar(message[i], 3, key1, key2)));
        }
        }
        break;
 
    default:
    cout << "Invalid encryption method" << endl;
    return message;
    }

     return final;}
int main ()
{

    string c ;
    string final;
    int method_choice = 0;
    string key1, key2;

    cout << "enter a message to encrypt " << endl;
    getline(cin, c);
    cout << "enter key 1" << endl;
    getline(cin,key1);
    cout << "enter key 2" << endl;
    getline(cin, key2);

    cout << "select method" << endl;
    cout << "method 1" << endl;
    cout << "method 2" << endl;
    cout << "method 3" << endl;
    cout << "method 4" << endl;

    // cin >> method_choice;
    cin >> method_choice; 
    
    //spence says stoi function is to convert string to int

    final = encryptMessage(c, method_choice, key1, key2);

    cout << "the encrypted message is: " << final << endl;

    return 0;
}