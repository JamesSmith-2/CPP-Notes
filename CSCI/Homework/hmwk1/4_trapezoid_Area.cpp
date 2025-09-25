#include <iostream>

using namespace std;

int main(){

    int side_one, side_two, height;
    double area;

    cout << "What is the length of one of the parallel sides?" << endl;
    cin >> side_one;

    cout << "What is the length of the other parallel side?" << endl;
    cin >> side_two;

    cout << "What is the height of the trapezoid?" << endl;
    cin >> height;

    area = 0.5 * (side_one + side_two) * height;

    cout << "The trapezoid has an area of " << area << " units.";


    return 0;
}