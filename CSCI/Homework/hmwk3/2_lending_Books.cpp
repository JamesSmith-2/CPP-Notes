// CSCI 1300 Fall 2023
// Author: James Smith
// TA: Pawin Taechoyotin
// Question 2

#include <iostream>
#include <cassert>
using namespace std;

// [Replace with the goal of the program]

int main()
{
    int genre_choice, mystery_author, mystery_book, science_author, science_book;

    cout << "Select the genre: ";
    cout << "(1) Mystery ";
    cout << "(2) Science" << endl;
    cin >> genre_choice;

    if (genre_choice == 1)
    {

        cout << "Select the Author: ";
        cout << "(1) Agatha Christie ";
        cout << "(2) Arthur Conan Doyle ";
        cout << "(3) Stephen King " << endl;

        cin >> mystery_author;

        if (mystery_author == 1)
        {
            cout << "Select the Book Title: ";
            cout << "(1) Hercule Poirot ";
            cout << "(2) Miss Marple Detective" << endl;
            cin >> mystery_book;

            if (mystery_book == 1)
            {
                cout << "You have ordered Hercule Poirot";

                return 0;
            }
            else if (mystery_book == 2)
            {
                cout << "You have ordered Miss Marple Detective";

                return 0;
            }
        }
        if (mystery_author == 2)
        {
            cout << "Select the Book Title: ";
            cout << "(1) The Memoirs of Sherlock Holmes ";
            cout << "(2) Tales of Terror and Mystery" << endl;
            cin >> mystery_book;

            if (mystery_book == 1)
            {
                cout << "You have ordered The Memoirs of Sherlock Holmes";

                return 0;
            }
            else if (mystery_book == 2)
            {
                cout << "You have ordered Tales of Terror and Mystery";

                return 0;
            }
        }
        if (mystery_author == 3)
        {
            cout << "Select the Book Title: ";
            cout << "(1) The Institute ";
            cout << "(2) Misery" << endl;
            cin >> mystery_book;

            if (mystery_book == 1)
            {
                cout << "You have ordered The Institute";

                return 0;
            }
            else if (mystery_book == 2)
            {
                cout << "You have ordered Misery";

                return 0;
            }
        }
    }
    if (genre_choice == 2)
    {

        cout << "Select the Author: ";
        cout << "(1) Stephen Hawking ";
        cout << "(2) Carl Sagan ";
        cout << "(3) Mary Roach " << endl;

        cin >> science_author;

        if (science_author == 1)
        {
            cout << "Select the Book Title: ";
            cout << "(1) A Brief History of Time ";
            cout << "(2) The Universe in a Nutshell " << endl;
            cin >> science_book;

            if (science_book == 1)
            {
                cout << "You have ordered A Brief History of Time";

                return 0;
            }
            else if (science_book == 2)
            {
                cout << "You have ordered The Universe in a Nutshell";

                return 0;
            }
            else
    {
        cout << "Please enter a valid input" << endl;
    }
        }
        if (science_author == 2)
        {
            cout << "Select the Book Title: ";
            cout << "(1) Cosmos ";
            cout << "(2) Pale Blue Dot" << endl;
            cin >> science_book;

            if (science_book == 1)
            {
                cout << "You have ordered Cosmos";

                return 0;
            }
            else if (science_book == 2)
            {
                cout << "You have ordered Pale Blue Dot";

                return 0;
            }
        }
        if (science_author == 3)
        {
            cout << "Select the Book Title: ";
            cout << "(1) Stiff: The Curious Lives of Human Cadavers ";
            cout << "(2) Gulp: Adventures on the Alimentary Canal " << endl;
            cin >> science_book;

            if (science_book == 1)
            {
                cout << "You have ordered Stiff: The Curious Lives of Human Cadavers";

                return 0;
            }
            else if (science_book == 2)
            {
                cout << "You have ordered Gulp: Adventures on the Alimentary Canal";

                return 0;
            }
            else
             {
                cout << "Please enter a valid input" << endl;
            }
        }
    }
    else
    {
        cout << "Please enter a valid input" << endl;
    }

    return 0;
}