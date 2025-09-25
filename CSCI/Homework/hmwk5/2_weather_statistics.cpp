#include <iostream>
#include <iomanip>
#include <cassert>

using namespace std;

double temperatureMean(double new_temperature[], const int TEMP_SIZE)
{ // The function should compute the mean/average of all the values in the array.
    double list = 0.00;

    for(int i = 0; i< TEMP_SIZE; i++)
    {
        list = new_temperature[i] + list;
    }
    
    return list / TEMP_SIZE;
}

double temperatureRange(double new_temperature[], const int TEMP_SIZE)
{ // The function should compute the difference between the maximum and minimum values found in the array.

    double max_temp = new_temperature[0];
    double min_temp = new_temperature[0];

    for(int i = 0; i < TEMP_SIZE; i++)
    {
        if(new_temperature[i] > max_temp)
        {
            max_temp = new_temperature[i];
        }
        if(new_temperature[i] < min_temp)
        {
            min_temp = new_temperature[i];
        }
    }
    return max_temp - min_temp;
}

void temperatureDelta(double new_temperature[], double old_temperature[], double delta[], const int TEMP_SIZE)
{ // The function should compute the difference between the last and current year's temperature readings and store the results in the delta array.
    for(int i = 0; i < TEMP_SIZE; i++)
    {
        delta[i] = old_temperature[i] - new_temperature[i];
    }
}

int main ()
{

    assert(temperatureMean({50.5, 67.2, 78.4},3));
    assert(temperatureRange({50.5, 67.2, 78.4}, 3));
    assert(temperatureDelta({50.5, 67.2, 78.4}, {55.5, 77.7, 88.8}, delta[], 3));

// cout << "Temperature Mean: " << temperatureMean << endl;
// cout << "Temperature Range: " << temperatureRange << endl;
// cout << "Tempurature Delta: " << temperatureDelta;


    return 0;
}