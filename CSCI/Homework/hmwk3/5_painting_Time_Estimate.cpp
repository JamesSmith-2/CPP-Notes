// CSCI 1300 Fall 2023
// Author: James Smith
// TA: Pawin Taechoyotin
// Question 5

#include <iostream>
#include <cassert>
using namespace std;

 double estimatePaintingTime(double total_area, char painter)
 {
    double total_time;
    
    switch(painter)
    {
        case 'W':
        total_time = ((12.0/5.0) * total_area) / 60; 
        break;

        case 'X':
        total_time = ((10.0/3.0) * total_area) / 60;
        break;
  
        case 'Y':
        total_time = ((5.0/2.0) * total_area) / 60; 
        break;

        case 'Z':
        total_time = ((15.0/7.0) * total_area) / 60;       
        break;

        default:
        cout << "please enter a valid input" << endl;
    }

    return total_time;
 }

int main ()
{
    double total_area;
    char painter;

    cout << "Enter area of the four walls (in sq ft)" << endl;
    cin >> total_area;
    cout << "Select a painter (W, X, Y or Z)" << endl;
    cin >> painter;

    if(total_area <= 0)
    {
        cout << "Please enter a valid input";
        return 0;
    }
    if(painter > 90 || painter < 87)
    {
        cout << "Please enter a valid input";
        return 0;
    }

    double total_time = estimatePaintingTime(total_area, painter);

    cout << "The time taken to paint all four walls by painter " << painter <<": " << total_time << " hours" << endl;



    return 0;
}