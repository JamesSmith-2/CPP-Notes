// CSCI 1300 Fall 2023
// Author: James Smith
// TA: Pawin Taechoyotin
// Question 1

#include <iostream>

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
        } // this is working
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

int main ()
{
    int shift;
    char letter;

    cout << "Enter a letter to encrypt:" << endl;
    cin >> letter;
    cout << "Enter an integer to shift the letter by:" << endl;
    cin >> shift;

    char final = shiftChar(letter, shift);

    cout << "The encrypted letter is: " << final << endl;

    return 0;
}