// CSCI 1300 Fall 2023
// Author: James Smith
// TA: Pawin Taechoyotin
// Question 6

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void calculateAndDisplayDiet(int current_day, double previous_days_feed)
{
    
    double feed_min, feed_max;

    switch(current_day)
    {
    
        case 0 :
        case 1:
        case 3 :
        case 4 :
    // no game   12.5
        feed_min = 12.5;
        break;
    
    case 2:
    case 5:
    case 6:

        feed_min = 16.5;
        break;
    } 

    feed_max = 35 - previous_days_feed;

    if (feed_max < feed_min)
    {
        cout << "Ralphie was fed too much yesterday!" << endl;
        return;
    }

    cout << "Ralphie should be fed at least " << fixed << setprecision(2) << feed_min <<" and at most " << fixed << setprecision (2) << feed_max << " MCals of food today." << endl;


}
int main ()
{
    int current_day;
    double previous_days_feed;

    
    cout << "What day is it today? Enter a number from 0 to 6:" << endl;
    cin >> current_day;
        if (current_day < 0)
        {
        cout << "Invalid input!" << endl;
        return 0;
        }
         if (current_day > 6)
        {
        cout << "Invalid input!" << endl;
        return 0;
        }
    cout << "How much was Ralphie fed yesterday? Enter an amount in MCals:" << endl;
    cin >> previous_days_feed;
        if (previous_days_feed < 0)
        {
        cout << "Invalid input!" << endl;
        return 0;
        }

    calculateAndDisplayDiet(current_day, previous_days_feed); 

    

    return 0;
}