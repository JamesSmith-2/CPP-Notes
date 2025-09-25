#include <iostream>
using namespace std;
#include <string>

int main()
{
    //insert the variable
   string name = "user_name";
    //Tell the user what we need
    cout << "Please enter your name below:" << endl;
    //user inputs their name
    cin >> name;
    //program says hello to the user
   cout << "Hello, " << name << "!" << endl;

   return 0;

}