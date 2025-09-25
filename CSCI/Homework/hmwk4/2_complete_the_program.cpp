// CSCI 1300 Fall 2023
// Author: James Smith
// TA: Pawin Taechoyotin
// Question 2

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string composeMessage(string first_name, string last_name, char position)
{
    string message;

    cout << "Welcome Aboard " << first_name << " " << last_name << "! ";

    switch (position)
    {
        case 'P':
        {
            cout << "The passenger rooms are thru the third door on the right" << endl;
            break;
        }
        case 'C':
        {
            cout << "The captain's quarters are up the stairs on the left" << endl;
            break;
        }
        case 'E':
        {
            cout << "The engine rooms are below deck down the second aft stairway" << endl;
            break;
        }
        case 'N':
        {
            cout << "The cartography chamber is up the stairs on the bow" << endl;
            break;
        }
        default:
        {
            cout << "Please enter a valid input" << endl;
        }
    }
    return message;
}

int main()
{
    //Declare variables
    string first_name, last_name;
    char position;

    //Capture user input
    cout << "What is your first name?" << endl;
    cin >> first_name;
    cout << "What is your last name?" << endl;
    cin >> last_name;
    cout << "What is your position? Enter P for passenger, C for captain, E for engineer, and N for navigator:" << endl;
    cin >> position;

    //Validate input

  if (position !=67 && position !=69 && position != 78 && position != 80) //ascii for P: 80, C:67, E: 69, N:78
    {
        cout << "Invalid position!" << endl;
        return 0;
    }

    //Compose and display message
    string message = composeMessage(first_name, last_name, position);
    cout << message << endl;
    return 0;
}