#include <iostream>

using namespace std;

int split(string input_string, char seperator, string arr[], int arr_size)
{
    if (input_string.empty())
    {
        return 0;
    }

    int pos = 0;
    int count = 0;

    while ((pos = input_string.find(seperator)) != string::npos && count < arr_size) 
        {
            arr[count] = input_string.substr(0, pos);
            input_string.erase(0, pos + 1);
            count++;

        if (!input_string.empty() && count < arr_size)
        {
            arr[count] = input_string;
            count++;
        }

        if (input_string.find(seperator) != string::npos) 
        {
            return -1;
        }
}
return pos;
}

int main()
{
    //aaaaaaaaaaaaaaaaaaaaaaaaaaa

    return 0;
}