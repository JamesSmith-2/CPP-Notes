#include <iostream>
#include <cstdlib> // rand()
#include <ctime>

using namespace std;

int generateRandom(int min, int max)
{
    return (rand() % (max - min + 1) + min);
}

int main()
{
    // cout << RAND_MAX << endl;
    // srand() -> seeds our rand() function
    srand(time(0)); // only call this once in the entire project (call it in the first line in main() then forget it exists)
    for(int i = 0; i < 5; i++)
    {
        cout << generateRandom(400, 650) + 1 << endl;
    }

    //range -> 1 and 10        -> (rand() % 10) + 1
    // range min and max       -> rand() % (max - min + 1) - min


return 0;
}