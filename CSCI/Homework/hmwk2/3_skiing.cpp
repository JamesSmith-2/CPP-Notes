#include <iostream>
using namespace std;

 // You are excited to go Skiing with your friends and packed all your gear. You check your weather app just to be sure if the weather conditions for tomorrow is most suitable for skiing. The best temperature for skiing is between 20 to 30 degrees Fahrenheit inclusive and wind speed not more than 50 kmph (kilometers per hour). Write a C++ program to prompt the user to enter the temperature and wind speed values and determine if the conditions are ideal for skiing or not.

//The input should be a non-negative integer (for temperature) and non-negative integer (for wind speed).

int main ()
{
    int temperature, wind_speed;

    cout << "What is tomorrow's temperature looking like?" << endl;
    cin >> temperature;

    cout << "What is tomorrow's wind speed looking like?" << endl;
    cin >> wind_speed;

// -----------------------------------

// ------------------------------------
// Ideal and Exact 20 degrees
    if (temperature < 0 || wind_speed < 0)
    {
        cout << "Please enter valid input.";
    }
    else if((temperature >= 20 && temperature <= 30 )&& (wind_speed <= 50))
    {
        cout << "The weather conditions are ideal for skiing tomorrow.";
    }
    else if (temperature < 20 || temperature > 30 || wind_speed > 50)
    {
        cout << "The weather conditions are not ideal for skiing tomorrow.";
    }
    else
    {
        cout << "The weather conditions are not ideal for skiing tomorrow." << endl;
    }

    return 0;
}   