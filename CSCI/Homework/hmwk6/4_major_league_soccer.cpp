#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>

using namespace std;

    vector<string> teamsInTournament(string teamscores_file, int wins, int goals)
    {
        ifstream file_in(teamscores_file);
        string line, name;
        vector<string> vec;

    while(getline(file_in,line)) 
    {
        int len = line.length();
        
        if(len > 0 && !isspace(line.at(0)))
        {
            for(int i = 0; i < len; i++)
            {
                if(line.at(i) == ',') 
                {
                    name = line.substr(0, i);

                    line = stod(line.substr(i+1));

                    wins = stoi(line);

                    goals = stoi(line);
                    }
                }
        vec.push_back(name);
            }
            
        
    }
    return vec;
    }

int main()
{
    ifstream file_in;
    int wins, goals;
    string teamscores_file;

    cout << "Enter teamscores filename" << endl;
    getline(cin, teamscores_file);

    cout << "Enter number of wins required" << endl;

    cin >> wins;

    cout << "Enter number of goals scored for a tie-breaker" << endl;

    cin >> goals;

    vector<string> result = teamsInTournament(teamscores_file, wins, goals);

    cout << "Teams in the tournament: " << endl;
    for (const string& team : result)
    {
        cout << team << endl;
    }


    return 0;
}