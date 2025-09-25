#include <iostream>
#include <iomanip>
using namespace std;


int main ()
{
    double balance = 1000.00;
    double withdraw;
    

    cout << "Enter the amount to be withdrawn from your bank account: " << endl;
    cin >> withdraw;

    balance = balance - withdraw;

    if (withdraw <= 0)
    {
        cout << "Invalid input. Withdrawn amount must be a non-negative value." << endl;
    }

    else if(balance >= 100)
    {
        cout << "Transaction Successful! You're balance is $" << fixed << setprecision (2) << balance << endl;
    }


    else 
    {
        cout << "Transaction Failed!" << endl;
    }


    return 0;
}