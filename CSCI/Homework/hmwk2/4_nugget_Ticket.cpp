#include <iostream>
using namespace std;


int main ()
{
    double budget;
    char seat_choice;

    cout << "What is your budget?" << endl;
    cin >> budget;
    cout << "Which of these seats would you like to take (G, B, P or O)?" << endl;
    cin >> seat_choice;

    if(budget <= 0 || seat_choice == 'g' || seat_choice == 'b'|| seat_choice == 'p' || seat_choice == 'o'|| seat_choice == 'C'|| seat_choice == 'Q')
    {
        cout << "Please enter valid input." << endl;
    }
   else if(budget >= 1950.33)
    {
        if(seat_choice == 'G')
            {
                cout << "Yes, this seat is within your budget!" << endl;
            }
        else if(seat_choice == 'B')
            {
                cout << "Yes, this seat is within your budget!" << endl;
            }
        else if( seat_choice == 'P')
            {
                cout << "Yes, this seat is within your budget!" << endl;
            }
        else if( seat_choice == 'O')
            {
                cout << "Yes, this seat is within your budget!" << endl;
            }
       
            }      
    else if(budget >= 1684.29)
        {
        if(seat_choice == 'G')
            {
                cout << "Yes, this seat is within your budget!" << endl;
            }
        else if(seat_choice == 'B')
            {
                cout << "Yes, this seat is within your budget!" << endl;
            }
        else if(seat_choice == 'P')
            {
                cout << "Yes, this seat is within your budget!" << endl;
            }
        else if( seat_choice == 'O')
            {
                cout << "Sorry, this seat is outside your budget." << endl;
            }

        }
    else if(budget >= 1340.96)
        {
        if(seat_choice == 'G')
            {
                cout << "Yes, this seat is within your budget!" << endl;
            }
        else if(seat_choice == 'B')
            {
                cout << "Yes, this seat is within your budget!" << endl;
            }
        else if( seat_choice == 'P')
            {
                cout << "Sorry, this seat is outside your budget." << endl;
            }
        else if(seat_choice == 'O')
            {
                cout << "Sorry, this seat is outside your budget." << endl;
            }

        }
       else if(budget >= 1075.15)
        {
        if(seat_choice == 'G')
            {
                cout << "Yes, this seat is within your budget!" << endl;
            }
        else if( seat_choice == 'B')
            {
                cout << "Sorry, this seat is outside your budget." << endl;
            }
        else if( seat_choice == 'P')
            {
                cout << "Sorry, this seat is outside your budget." << endl;
            }
        else if( seat_choice == 'O')
            {
                cout << "Sorry, this seat is outside your budget." << endl;
            }
            else 
            {
                cout << "Please enter valid input." << endl;
            }
        }
        else if(budget < 1075.15)
        { 
            cout << "Sorry, this seat is outside your budget." << endl;
        }
    else
    {
        cout << "Please enter valid input." << endl;
    }


    return 0;
}