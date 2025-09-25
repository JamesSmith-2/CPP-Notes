// MUST BE 2D ARRAY
#include <cmath>
#include <iomanip>
#include <iostream>


using namespace std;


void calculateDistanceMatrix(double distance[][3], double clue [][2], double region [][2], const int CLUE_ROWS, const int CLUE_COLS, const int REG_ROWS, const int REG_COLS)
{
    for(int i = 0; i < CLUE_ROWS; i++)
    {
        for(int j = 0; j < REG_ROWS; j++)
        {
            distance[i][j] = sqrt(pow((clue[i][0]-region[j][0]),2) + pow((clue[i][1]-region[j][1]),2));
    }}
    for( int i = 0; i < CLUE_ROWS; i++)
    {
        for( int j = 0; j < REG_ROWS; j++)
        {
            //cout << fixed << setprecision(2) << distance[i][j] << " ";
        }
        cout << endl;
    }
}
 // [Replace with the goal of the program]

int main ()
{
    // program goes here



    return 0;
}