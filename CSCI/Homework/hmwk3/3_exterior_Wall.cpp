// CSCI 1300 Fall 2023
// Author: James Smith
// TA: Pawin Taechoyotin
// Question 3

#include <iostream>
#include <cassert>
using namespace std;

double calculateWallArea(double length, double width)
{
    // calculates the area of all 4 walls

   double total_Area = 2 * (length + width) * 10;

    return total_Area;

}

int main ()
{
        double length, width;

    cout << "Enter length of the base of the house (in ft)" << endl;
    cin >> length;
    cout << "Enter width of the base of the house (in ft)" << endl;
    cin >> width;

    if(length <= 0)
    {
        cout << "Please enter a valid input" << endl;
        return 0;
    }
     if(width <= 0)
    {
        cout << "Please enter a valid input" << endl;
        return 0;
    }
    else
    {

   cout << "The total area of all the four walls: "  << calculateWallArea(length, width) << " sq ft" << endl;
    }

    return 0;
}