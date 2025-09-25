// CSCI 1300 Fall 2023
// Author: James Smith
// TA: Pawin Taechoyotin
// Question 5

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double calculateDistance(double x1, double y1, double x2, double y2, int distance_type)
{
    double distance;

    if(distance_type == 1)
    {
        distance = (abs(x2-x1)) + (abs(y2-y1));
    }
    else if (distance_type == 2)
    {
        distance = sqrt(pow(x2-x1, 2) +(pow (y2-y1, 2)));
    }


    return distance;
}

int main ()
{
    double x1, y1, x2, y2, distance;
    int distance_type;

    cout << "Enter distance type:" << endl;
    cin >> distance_type;
        if(distance_type != 1 && distance_type != 2)
    {
        cout << "Invalid distance type!";
        return 0;
    }
    cout << "Enter x1:" << endl;
    cin >> x1;
    cout << "Enter y1:" << endl;
    cin >> y1;
    cout << "Enter x2:" << endl;
    cin >> x2;
    cout << "Enter y2:" << endl;
    cin >> y2;



    distance = calculateDistance(x1,y1,x2,y2,distance_type);  

    cout << "The distance between the points is: " << fixed << setprecision(3) << distance << endl;

    return 0;
}