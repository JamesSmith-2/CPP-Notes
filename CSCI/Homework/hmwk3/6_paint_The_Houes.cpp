// CSCI 1300 Fall 2023
// Author: James Smith
// TA: Pawin Taechoyotin
// Question 6

#include <iostream>
#include <cassert>
using namespace std;

double calculateWallArea(double length, double width)
{
    // calculates the area of all 4 walls

   double total_Area = 2 * (length + width) * 10;

    return total_Area;

}

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
    int operation;
    double length, width, total_area;
    char paint_type, painter;


   cout << "Choose an option" << endl;
   cout << "1. Calculate Exterior Wall Area" << endl;
   cout << "2. Calculate Paint Cost" << endl;
   cout << "3. Estimate Painting Time" << endl;
   cout << "4. Exit" << endl;

   cin >> operation;

   switch (operation)
   {
   case 1:
   {
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
    }
    break;

    case 2:
    {
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
    }
    break;

    case 3:
    {
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
    }
    break;

    case 4:
    cout << "Thank you!" << endl;
    break;

    default:
    {
        cout << "Please enter a valid input" << endl;
        break;
    }

    return 0;
    }
}