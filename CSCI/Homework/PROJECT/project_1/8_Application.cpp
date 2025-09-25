// CSCI 1300 Fall 2023
// Author: James Smith
// TA: Pawin Taechoyotin
// Question 8

#include <iostream>
#include <string>

using namespace std;

// -----ENCRYPT----------

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
{{
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
}}

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

     return final;
 }

// -------DECYRPT-----------

 char shiftCharDec(char c, int shift)
{
    shift = shift * -1;
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
        else // if you want to shift backwards, or by a negative number
        {
        for(int i = 0; i < -shift; i++)
        {
            if(c == 'a')
            {
                c = 'z';
            }
            else
            {
                c--;
            }

        }
        } // this is not working
    
    }
    return c;
}

char decryptChar(char c, int method_choice, string key1, string key2)
{   char final;
    int temp;
    if (c < 'a' && c > 'z')
    {
        cout << "Invalid decryption method" << endl;
        return c;
    }
    if (method_choice > 3)
    {
        cout << "Invalid decryption method" << endl;
        return c;
    }
    if (method_choice <= 0)
    {
        cout << "Invalid decryption method" << endl;
        return c;
    }

    if((method_choice == 1))
    {
        final = shiftCharDec(c, 1);
    }

    if ((method_choice == 2))
    {
        temp = getMethod2ShiftAmount(key1);
        final = shiftCharDec(c, temp);
    }

    if ((method_choice == 3))
    {
        temp = getMethod3ShiftAmount(key1, key2);
        final = shiftCharDec(c, temp);
    }
    return final;
 }

string decryptMessage(string message, int method_choice, string key1, string key2)
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
    final.append(string(1, decryptChar(message[i], method_choice, key1, key2)));
    }
    break;

    case 4:

        for (int i = 0; i < messagelen; i++)
        {
        if(i%3 ==0)
        {
            final.append(string(1, decryptChar(message[i], 1, key1, key2))); // final.append is adding the character to the "final" string and is appending the new 'encryptChar' character to the end
        }
        if(i%3 ==1)
        {
            final.append(string(1,decryptChar(message[i], 2, key1, key2)));
        }
        if(i%3 ==2)
        {
            final.append(string(1,decryptChar(message[i], 3, key1, key2)));
        }
        }
        break;
 
    default:
    cout << "Invalid decryption method" << endl;
    return message;
    }

     return final;
}


int main ()
{
    int menu_choice = 0;
    int encrypt_choice = 0;
    string key1 = "RAH";
    string key2 = "RAH";
    string message, final;
    string str1;

    while (menu_choice != 6)
    {
        cout << "Please input 1-6 followed by enter to navigate the menu:" << endl;
        cout << "1. Set Encryption Key 1" << endl;
        cout << "2. Set Encryption Key 2" << endl;
        cout << "3. Select Encryption Method" << endl;
        cout << "4. Encrypt Message" << endl;
        cout << "5. Decrypt Message" << endl;
        cout << "6. Exit Program" << endl;
        cin >> menu_choice;

        while (menu_choice > 6 || menu_choice < 1)
        {
        while(cin.fail())
            {
                cin.clear();
                cin.ignore(1000, '\n');
                        
                cout << "Invalid input" << endl;
                cin >> menu_choice; 
            }
        while(menu_choice < 6 || menu_choice > 1)
        {
            cout << "Invalid input" << endl;
            cin >> menu_choice;
        }}

        switch (menu_choice)
        {
                case 1:
                cout << "Enter key:" << endl;
                cin.ignore();
                getline(cin, key1);
                while(key1.length() < 1)
                {
                    cout << "Invalid key" << endl;
                    cout << "Enter key:" << endl;
                    getline(cin, key1);
                }
                cout << "Successfully set encryption key1 to " << key1 << endl;
            break;

            case 2:
                cout << "Enter key:" << endl;
                cin.ignore();
                getline(cin, key2);
                while(key2.length() < 1)
                {
                    cout << "Invalid key" << endl;
                    cout << "Enter key:" << endl;
                    getline(cin, key2); 
                }
                cout << "Successfully set encryption key2 to " << key2 << endl;
            break;

            case 3:
                cout << "Please input 1-4 to decide encryption technique." << endl;
                cout << "1. Method1 only (shift by 1)" <<endl;
                cout << "2. Method2 only (shift by first key)" <<endl;
                cout << "3. Method3 only (shift by both keys)" <<endl;
                cout << "4. Mix of Method1, Method2, Method3" <<endl;
               
                cin >> encrypt_choice;
                    cin.ignore(1000, '\n');

                    
                    if((cin.fail()))
                        {
                            while(cin.fail())
                                {
                                    cin.clear();
                                    cin.ignore(1000, '\n');
                        
                                    cout << "Invalid encryption choice" << endl;
                                    cin >> encrypt_choice; 
                                }
                        }
                        
                    if(encrypt_choice < 0)
                    {
                        while (encrypt_choice < 0)
                        { cout << "Invalid encryption choice" << endl;
                            cin >> encrypt_choice; 
                        }
                    }     
                    if (encrypt_choice > 4)
                        {
                            cout << "Invalid encryption choice" << endl;
                            cin >> encrypt_choice;   
                        }
                    if(encrypt_choice >=1 && encrypt_choice <=4) 
                        {
                            cout << "Successfully set encryption type to " << encrypt_choice << endl;
                        }
                    

            break;

            case 4:
                if(encrypt_choice == 0 || key1 == "RAH" || key2 == "RAH")
                {
                        cout << "You cannot do this until you set both keys and choose an encryption method" << endl;
                }
                else
                {
                cout << "Enter your message to encrypt:" << endl;

                cin.clear();
                cin.ignore (1000, '\n');
                getline(cin, message);

                final = encryptMessage(message, encrypt_choice, key1, key2);

                cout << final << endl;
                }
            break;

            case 5:
                if(encrypt_choice == 0 ||key1 == "RAH" || key2 == "RAH")
                {
                    cout << "You cannot do this until you set both keys and choose an encryption method" << endl;
                }
                else{
                cout << "Enter your message to decrypt:" << endl;

                cin.clear();
                cin.ignore (1000, '\n');

                getline(cin,message);

                final = decryptMessage(message, encrypt_choice, key1, key2);

                cout << final << endl;
                }
            break;

            case 6:
                cout << "Goodbye." << endl;
                return 0;
            break;

            default:
                while (menu_choice <= 0)
                        { cout << "Invalid input" << endl;
                            cin >> menu_choice; 
                        }
                while (menu_choice > 6)
                    {
                        cout << "Invalid input" << endl;
                        cin >> menu_choice;
                    }
                        if (menu_choice == 6)
                        {
                        cout << "Goodbye." << endl;
                        return 0;
                        }
                while (menu_choice <= 0)
                        { cout << "Invalid input" << endl;
                            cin >> menu_choice; 
                        }
    }
    }


    return 0;
}