// CSCI 1300 Fall 2023
// Author: James Smith
// TA: Pawin Taechoyotin
// Question 4

#include <iostream>

using namespace std;

int purchaseTruck(int budget, int choice)
{
    switch (choice)
    {
    case 1:
    {
        budget = budget - 26900;
        cout << "Congratulations! You have purchased a Ford F-150" << endl;
        break;
    }
    case 2:
    {
        budget = budget - 21400;
        cout << "Congratulations! You have purchased a Dodge RAM 1500" << endl;
        break;
    }
   case 3:
    {
        budget = budget - 24700;
        cout << "Congratulations! You have purchased a Chevy Silverado" << endl;
        break;
    }
    case 4:
    {
        budget = budget - 31200;
        cout << "Congratulations! You have purchased a Toyota Tundra" << endl;
        break;
    }
    case 5:
    {
        budget = budget - 28300;
        cout << "Congratulations! You have purchased a GMC Sierra 1500" << endl;
        break;
    }
    default:
    {
        cout << "Invalid input!" << endl;
    }
    }

    return budget;
}


int main()
{
    int choice = 0;
    int choice_count = 3;
    int budget = 81350;

    cout << "These are the trucks available for purchase:" << endl;
    cout << "Truck model 1: Ford F-150. Price: $26,900" << endl;
    cout << "Truck model 2: Dodge RAM 1500. Price: $21,400" << endl;
    cout << "Truck model 3: Chevy Silverado. Price: $24,700" << endl;
    cout << "Truck model 4: Toyota Tundra. Price: $31,200" << endl;
    cout << "Truck model 5: GMC Sierra 1500. Price: $28,300" << endl;
    cout << "Please enter a number from 1 to 5:" << endl;

    cin >> choice;

    budget = purchaseTruck(budget, choice); 

    //cout  << budget;
    --choice_count;

  
    while (choice_count > 0 && budget >= 31200)
    {

    cout << "Please enter a number from 1 to 5:" << endl;
    cin >> choice;
    budget = purchaseTruck(budget, choice);
    //cout  << budget;
    --choice_count;
    }

    return 0;
}
