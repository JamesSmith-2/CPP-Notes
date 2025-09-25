#include <iostream>

using namespace std;

int main(){

    double indoor_pool, outdoor_pool, hours;

    cout << "How many hours have passed?" << endl;
    cin >> hours;

    indoor_pool = 10 + (0.3 * hours);
    outdoor_pool = 14 + (0.5 * hours);

    cout << "The indoor pool has " << indoor_pool << " inches of water, and the outdoor pool has " << outdoor_pool << " inches of water.";

    return 0;
}