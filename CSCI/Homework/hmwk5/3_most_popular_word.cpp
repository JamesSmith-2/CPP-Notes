// NO VECTORS 
#include <iostream>
#include <string>

using namespace std;

void mostPopularWord(string words[], const int WORD_SIZE)
{
    int count = 0;
    int max = 0;
    string message;
    for(int i = 0; i < WORD_SIZE; i++)
    {
        count = 0;
        for(int j = 0; j < WORD_SIZE; j++)
        {
            if(words[i] == words[j])
            {
                count++;
            }
            if (count >= max)
            {
                max = count;
                message = words[i];
            }
        }
    }
    cout << "The most popular word : " << message << endl;
    cout << "Frequency : " << max << endl;
    cout << "Found at pos : " << endl;
    for(int i = 0; i < WORD_SIZE; i++)
    {
        if(words[i] == message)
        {
            cout << i << endl;
        }
    }
}



int main ()
{



    return 0;
}