// CSCI 1300 Fall 2023
// Author: James Smith
// TA: Pawin Taechoyotin
// Question 4

#include <iostream>
#include <cassert>
using namespace std;

double calculatePaintCost(double total_area, char paint_type)
{
    double total_cost;


    switch (paint_type)
    {
        case 'A':
        total_cost = total_area * .75;
        break;

        case 'B':
        total_cost = total_area * 1.25;
        break;

        case 'C':
        total_cost = total_area * 2.75;
        break;

        default:
        total_cost = 0;
        break;
    }


    return total_cost;
}

int main ()
{
    double total_area;
    char paint_type;


    cout << "Enter area of the four walls (in sq ft)" << endl;
    cin >> total_area;
    cout << "Select the paint grade (A, B, or C)" << endl;
    cin >> paint_type;

    if(paint_type < 65 || paint_type > 68)
    {
        cout << "Please enter a valid input" << endl;

        return 0;
    }
    if(total_area <= 0)
    {
        cout << "Please enter a valid input" << endl;

        return 0;
    }

    double total_cost = calculatePaintCost(total_area, paint_type);

    if(total_cost <= 0)
    {
        cout << "Please enter a valid input" << endl;
        return 0;
    }

    cout << "The total cost to paint all four walls: $" << total_cost << endl;

    return 0;
}