#include <iostream>
#include <iomanip>
using namespace std;

 // [Replace with the goal of the program]

int main ()
{
    double price;
    int days_rented; 
    char car_type;
    int price_per_day;

    double base_price;
    
    cout << "Which car type ( A, B, C, or D ) would you like to rent?" << endl;
    cin >> car_type;

    cout << "How many days would you like to rent this car?" << endl;
    cin >> days_rented;

if(days_rented < 0)
{
    cout << "Please enter valid input.";
}

switch (car_type)
{
    case 'A': 
        base_price = 100; 
        price_per_day = 15;
        break;
    case 'B': 
        base_price = 150; 
        price_per_day = 20;
        break;
    case 'C': 
        base_price = 200; 
        price_per_day = 25;
        break;
    case 'D': 
        base_price = 250; 
        price_per_day = 30;
        break;
    default:
        cout << "Please enter valid input.";
}


        price = 1.09 * (base_price + days_rented * price_per_day);
    if(price > 0)
    {
        cout << "Your bill total is $" << fixed << setprecision (2)<< price << endl;
    }



    return 0;
}