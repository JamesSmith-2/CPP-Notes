#include <iostream>
#include <array>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{ 
    const int ARRAYSIZE = 52;
    const int NUMBERSIZE = 7;
    string card_names[9] = {"Ace", "Clubs", "Diamonds", "Hearts", "Spades", "Jack", "Queen", "King", "Joker"};
    int sq_root_nums[10] = {1,2,3,4,5,6,7,8,9,10};
    int numbers[NUMBERSIZE]; //= {56,63,70,77,84,91,98}; // numbers 50 -> 100 that are divisible by 7
    char letters[ARRAYSIZE] = {};
    double temp = 0;

    char currentUP = 'A';
    char currentLOW = 'a';

    //    cout << "Card Names" << endl;
        for(int k =0; k < 9; k++)
        {
            cout << card_names[k] << endl;
        }
    //    cout << "sqrt" << endl;
        for(int i = 0; i < 10; i++)
        {
            temp = sqrt(sq_root_nums[i]);
            cout << fixed << setprecision(3) << temp << endl;
        }
  //      cout << "divisible by 7" << endl;
        int list = 0;
        for(int j = 50; j <= 100; j++)
        {
            if(j % 7 == 0)
            {
                numbers[list] = j;
                cout << numbers[list] << endl;
                list++;
            }
        }
   //     cout << "letters" << endl; // print A,a,B,b,C,c,D,d,E,e,F,f,G,g ...
        for(int l = 0; l < ARRAYSIZE; l+=2)
        {
            letters[l] = currentUP;
            letters[l + 1] = currentLOW;
            currentUP++;
            currentLOW++;
        }
        for( int f =0; f < ARRAYSIZE; f++)
        {
            cout << letters[f] << endl;
        }
        cout << endl;

        return 0;
    }
    