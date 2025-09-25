#include <iostream>

using namespace std;

int main(){
    // declare all the variable
    double fahrenheit, celsius;

    // prompt the user & get their input
    cout << "What is the temperature in Fahrenheit?" << endl;
    cin >> fahrenheit;

    // temperature calculation
    celsius = (fahrenheit - 32) * (5.0/9.0); // EDIT THIS LINE TO CALCULATE TEMPERATURE
    // hint: use (5.0/9.0) instead of (5/9)

    cout << "The temperature is " << celsius << " degree Celsius." << endl;
    return 0;
}