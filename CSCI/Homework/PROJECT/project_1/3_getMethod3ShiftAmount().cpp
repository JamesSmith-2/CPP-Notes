// CSCI 1300 Fall 2023
// Author: James Smith
// TA: Pawin Taechoyotin
// Question 3

#include <iostream>

using namespace std;

/*Method 3 is a right shift encryption with a shift value that you will calculate from two keys that the user provides. The shift value will be calculated based on the number of matching letters between the two keys modulo 26.

Example 1:

Key 1: hello
Key 2: world: 
The shift value is the sum of all the matches, which in this case would be 3.

Original Message: csci is great
Encrypted Message: fvfl lv juhdw
Example 2:

Key 1: rocky
Key 2: road

    h   e   l   l   o
w   0   0   0   0   0
o   0   0   0   0   1
r   0   0   0   0   0
l   0   0   1   1   0
D   0   0   0   0   0

Computed Shift Value: 2
Original Message: programming is fun!
Encrypted Message: rtqitcookpi ku hwp!*/

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

int main ()
{
    string key1;
    string key2;
    int shift;

    cout << "Enter key 1:" << endl;
    cin >> key1;
    cout << "Enter key 2:" << endl;
    cin >> key2;

    shift = getMethod3ShiftAmount(key1, key2);

    cout << "The Method 3 Shift Value is: " << shift << endl;


   return 0;
}