#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int keywordThreshold(string keyword_file, string keyword_threshold[10][2])
{
    //reads a file that contains spam words and stores them in an array
    // 2 columns: 1 -> spam keyword
    //            2 -> corresponding threshold
   ifstream file_in(keyword_file);
   int keyword_count = 0;

    if(file_in.fail())
        {
            cout << "Failed to open keyword file" << endl;
            return 0;
        }

 
    while(file_in >> keyword_threshold[keyword_count][0] >> keyword_threshold[keyword_count][1] && keyword_count < 10)
    {
        keyword_count++;
    }
    file_in.close();
    

    return keyword_count;
}

bool countFilter(string email_file, string keyword_threshold[10][2], int keyword_count[10], int keyword_size)
{
    //should count the number of spam keywords in email and store in keyword_count[]

    ifstream file_in(email_file);
    if(file_in.fail())
        {
            cout << "Failed to open email file" << endl;
            return false;
        }

    string word;
    while(file_in >> word)
    {
        for( int i = 0; i < keyword_size; i++)
        {
            if(word == keyword_threshold[i][0])
            {
                keyword_count[i]++;
            }
        }
    }

    file_in.close();
    return true;
}

bool checkSpam(int keyword_count[10], string keyword_threshold[10][2], int keyword_size)
{
    // check if the frequency of all spam keywords exceed the respective threshold.
    // if yes, count it as spam
    // if no, do not count it as spam

    for(int i =0; i < keyword_size; i++)
    {
        if(keyword_count[i] > stoi(keyword_threshold[i][1]))
        {
            return true;
        }
    }

    return false;
}

int main()
{
    string keyword_file = "keywords_1.txt";
    string email_file = "email.txt";

    return 0;
}