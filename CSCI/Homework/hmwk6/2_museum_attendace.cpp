#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void compareAttendanceSheet(string first_attendance_file, string second_attendance_file)
{
    ifstream file_in;
    string line;
    vector<string> vec1, vec2, missing;

    // Read first file
    file_in.open(first_attendance_file);

    if(file_in.fail())
        {
            cout << "Failed to open attendance files" << endl;
            return;
        }
    while(getline(file_in,line))
        {
            vec1.push_back(line);
        }
    file_in.close();

    // Read second file
    file_in.open(second_attendance_file);
    
    if(file_in.fail())
        {
            cout << "Failed to open attendance files" << endl;
            return;
        }

    while(getline(file_in,line))
        {
            vec2.push_back(line);
        }
    file_in.close();

    if(vec1 == vec2)
        {
            cout << "Every student has boarded the bus. It's time to leave." << endl;
        }
    else
        {
            for(const string& name1 : vec1)//I keep getting errors for this, looking for names in the scope of vector 1, and in the compiler it says to pass string by reference, and to add a & to denote that
                {
                    bool present = false;
                    for(const string& name2 : vec2)
                        {
                            if( name1 == name2)
                                {
                                    present = true;
                                    break;
                                }
                        }
                    if(!present)
                        {
                            missing.push_back(name1);
                        }
                }
            if(missing.empty())
            {
                cout << "Every student has boarded the bus. It's time to leave." << endl;
            }
            if(!missing.empty())
                {
                    cout << "Students yet to board the bus are" << endl;
                    for(const string& missing_student : missing)
                        {
                            cout << missing_student << endl;
                        }
                }
        }

}


int main ()
{
    string first_attendance_file = "attendance_sheet_3.txt";
    string second_attendance_file = "attendance_sheet_4.txt";

    compareAttendanceSheet(first_attendance_file, second_attendance_file);



    return 0;
}