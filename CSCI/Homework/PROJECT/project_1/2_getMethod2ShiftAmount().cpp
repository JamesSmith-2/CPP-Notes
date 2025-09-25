// CSCI 1300 Fall 2023
// Author: James Smith
// TA: Pawin Taechoyotin
// Question 2

#include <iostream>
#include <string>
#include <cassert>

using namespace std;
/*Method 2 is a right shift encryption with a shift value that you will calculate from a user provided key. You will calculate the shift value based on the following formula: (number of vowels in key + number of characters in key) modulus 26

Note: Only lowercase vowels a e i o u y should count towards the number of vowels.

Example 1:

Key: Rock
Shift Value: (1 + 4) mod 26 = 5
Original Message: hello world
Encrypted Message: mjqqt btwqi
Example 2:

Key: hello world
Shift Value: (3 + 11) mod 26 = 14
Original Message: Some Text!
Encrypted Message: Scas Tslh!*/

int getMethod2ShiftAmount(string key1)
{
    int lenOfKey = key1.length();
    int shift;

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

int main ()
{
    string input1;

    cout << "Enter key 1:" << endl;
    getline(cin, input1);

    int final = getMethod2ShiftAmount(input1);

    cout << "The Method 2 Shift Value is: " << final << endl;

    return 0;
}