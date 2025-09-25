// CSCI 1300 Fall 2023
// Author: James Smith
// TA: Pawin Taechoyotin
// Question 3

#include <iostream>


using namespace std;

int manageFeeder(int feeder, int days_since_last_fill)
{
    int days_until_empty;
    switch(feeder)
    {
    case 1:
    //Feeder 1
    {
        days_until_empty =( 21 - 3*(days_since_last_fill))/3;
        break;
    }
    case 2:
    //feeder 2
    {
        days_until_empty = (37 - 2*(days_since_last_fill))/2;
        break;
    }
    case 3:
    // feeder 3
    {
        days_until_empty = (17 - 4*(days_since_last_fill))/4;
        break;
    }
    default:
    {
        cout << "Invalid input!";
        return 0;
    }
    }
     return days_until_empty;
}



int main ()
{
 int feeder_1, feeder_2, feeder_3;
  int days_since_last_fill;

  cout << "How many days ago was feeder 1 filled?" << endl;
  cin >> days_since_last_fill;
      if(days_since_last_fill < 0)
    {
        cout << "Invalid input!" << endl;

        return 0;
    }
        feeder_1 = manageFeeder(1, days_since_last_fill);
    cout << "How many days ago was feeder 2 filled?" << endl;
    cin >> days_since_last_fill;
        if(days_since_last_fill < 0)
    {
        cout << "Invalid input!" << endl;

        return 0;
    }
        feeder_2 = manageFeeder(2, days_since_last_fill);

    cout << "How many days ago was feeder 3 filled?" << endl;
    cin >> days_since_last_fill;
        if(days_since_last_fill < 0)
    {
        cout << "Invalid input!" << endl;

        return 0;
    }
        feeder_3 = manageFeeder(3, days_since_last_fill);

    if(feeder_1 < 0&& feeder_2 < 0 && feeder_3 < 0 )
    {
        feeder_1 = 0;
        feeder_2 = 0;
        feeder_3 = 0;
    }
    cout << "Feeder 1 will need to be filled in " << feeder_1 <<" days, feeder 2 will need to be filled in " << feeder_2 << " days, and feeder 3 will need to be filled in " << feeder_3 << " days." << endl;


    return 0;
}