#include <iostream>
#include <fstream>
#include <sstream>
#include <random>
#include <vector>
#include <string>
#include "CandyLand.h"
#include "Player.h"
#include "board.h"

using namespace std;

struct Character
{
    string charactername;
    int stamina;
    int gold;
    Candy character_inventory[9];

};

void CandyLand:: startGame() // put the functions of the game within the setup game
{
    setupGame();
}


void CandyLand:: setupGame()
{
    loadCandies();
    loadMinigames(0);
    loadCharacters();
    characterSelect();

}

void CandyLand::loadCandies()
{
    //initialize an array of all the available candies
    /*struct Candy
{
    string name;
    string description;
    string effect_type;
    string effect_value;
    string type;
    double price;
};*/
    ifstream filein("candies.txt");
    vector<Candy> candy_list;
    Candy candy;
    string line;
    string temp;
    temp = to_string(candy.effect_value);

    while(getline(filein, line))
    {
        stringstream ssi(line);
    
    temp = to_string(candy.effect_value);

    if(getline(ssi, candy.name, '|') && getline(ssi, candy.description, '|') && getline(ssi, candy.effect_type, '|') && getline(ssi, temp, '|') && getline(ssi, candy.type, '|') && (ssi >> candy.price))
    {
        candy_list.push_back(candy);
    }
    else
    {
        cout << "Error reading a line from the file" << endl;
    }}

    //candy_list;

}

void CandyLand::loadMinigames(int gamechoice)
{
    //build a switch case for each of the minigames
    cin >> gamechoice;
    switch(gamechoice)
    {
        case 1:
            runRiddle();
            break;
        case 2:
            runRPS(player);
            break;
    }
    
}

void CandyLand::loadCharacters()
{
    //build a struct for each of the characters then apply each character to the player profile

    /*struct Character
{
    string charactername;
    int stamina;
    int gold;
    Candy character_inventory[]
};
*/
        Character toffee_todd{"Toffee_Todd", 200, 20, todd_inventory};
        Character jellybean_jane{"JellyBean_Jane", 100, 50, jane_inventory};
        Character chocolate_charlie{"Chocolate_Charlie", 50, 100, charlie_inventory};
        Character caramel_carl{"Caramel_Carl", 100, 500, carl_inventory};

        Character characterlist[4] = {toffee_todd, jellybean_jane, chocolate_charlie, caramel_carl};
}

int CandyLand::playerSwap()
{
    static int i = 0;
    i = 1 - i;
    return i;
}

void CandyLand::displayMainMenu()
{
    int menu_choice;
    int playermove;

    int i = playerSwap();

    cout << player[i].getPlayerName() << "'s Turn" << endl;
    board.displayBoard();
    cout << "1) Draw a card" << endl;
    cout << "2) Use Candy" << endl;
    cout << "3) Show Player Stats" << endl;
    cin >> menu_choice;
    switch (menu_choice)
    {
    case 1:
        player[i].getPlayerPosition();
        playermove = drawCard();
        board.movePlayer(playermove, &player[i]);
        break;
    case 2:
        /* code */
        break;
    case 3:
        /* code */
        break;
    
    default:
        break;
    }

}

void CandyLand:: gameLoop(Player player[])
{
    int i = playerSwap();
    int turn_count = 0;
    while(player[i].getPlayerPosition() >= 83) // make a function for getplayerlocation then return this with a t/f bool
    {
    //how do i switch from player 1 to player 2
    // Loop while neither player is at the castle at location 83

        

    board.displayBoard();
    cout << player[i].getPlayerName() << "'s Turn" << endl;
    displayMainMenu();

    turn_count++;
}}

// error: no declaration matches 'Candy CandyLand::findCandys(std::string)'
//  Candy CandyLand::findCandys(string candy_name)
//     {
//         Candy candy;
//         for(int i = 0; i < 9; i++)
//         {
//             if(_inventory[i].name == candy_name)
//             {
//                 return _inventory[i];
//             }
//         }
//         return candy;
//     }

// void CandyLand:: candyStore() // develop this in board.cpp
// {
//     // Copy Paste the candystore function
// }

int CandyLand:: drawCard()
{

    // min -> 1 and max -> 3
    // 1 -> pink
    // 2 -> green
    // 3 -> blue
    /*
    Create an instance of Card Struct
    assign it a random number
        if divisible by 1, 2, or 3, select from colors above
    Then generate a random number using rand()
    If divisible by 4, (AKA 1 in 4) then update bool isDouble to true for that card

    Update Player location
    */
    int double_choice = rand();
    // int playerpos = 0;
    int movement;
    Card card;
        card.color = rand(); // make a switch, with the a rand() % 4, then use switch case to 

        if(stoi(card.color) % 1 == 0)
        {
            card.color = "pink";
            movement = 1;
        }
        if(stoi(card.color) % 2 == 0)
        {
            card.color = "green";
            movement = 2;
        }
        if(stoi(card.color) % 3 == 0)
        {
            card.color = "blue";
            movement = 3;

        }
        if(double_choice % 4 == 0)
        {
            card.is_double = true;
            return movement * 2;
        }
        return movement;
}

void CandyLand:: calamity()
{
    //set up each calamity and randomly select 
}

int CandyLand:: generateRandom(int min, int max)
    {
        int answer = 0;
        answer = (rand() % (max - min + 1) + min);
        return answer;
    }

void CandyLand::runRiddle()
{
    int riddle_num = 0;
    riddle_num = generateRandom(1, 20);

    ifstream infile("riddles.txt");
    string line;

    if (!infile.is_open()) 
    {
        cout << "Error opening the riddle file." << endl;
    }

    int targetLineNumber = riddle_num;

    for (int currentLineNumber = 1; currentLineNumber <= targetLineNumber; currentLineNumber++) {
        if (!getline(infile, line)) {
            cout << "Error: Target line number not found." << endl;
            break;
        }
    }

    cout << line << endl;
}


void CandyLand::runRPS(Player players[2])
{
    string player1candy, player2candy;
    string victor = "Null";

    //candy to bet
    cout << "Player 1 Inventory" << endl;
    players[0].printInventory();
    cout << "Player 1: Select candy to bet" << endl;
    getline(cin, player1candy);
    // while(!players[0].findCandy(player1candy))
    // {
    //     cout << "Invalid Selection!" << endl;
    //     getline(cin, player1candy);
    // }

    cout << "Player 2 Inventory" << endl;
    players[1].printInventory();
    cout << "Player 2: Select candy to bet" << endl;
    getline(cin, player2candy);
    // while(!players[1].findCandy(player2candy))
    // {
    //     cout << "Invalid Selection!" << endl;
    //     getline(cin, player2candy);
    // }
    
    //RPS
    while(victor == "Null")
    {
        string player1choice, player2choice;

        cout << "Player 1: Enter r, p, or s" << endl;
        getline(cin, player1choice);
        cout << "Player 2: Enter r, p, or s" << endl;
        getline(cin, player2choice);

        if(player1choice == player2choice)
        {
            cout << "Tie! Play again" << endl;
            continue;
        }

        // paper beats rock p/r
        // rock beats scissors r/s
        // scissors beats paper s/p

        if(player1choice == "r")
        {
            if(player2choice == "s")
            {
                victor = "Player 1";
            }
            else if(player2choice == "p")
            {
                victor = "Player 2";
            }
        }
        else if(player1choice == "p")
        {
            if(player2choice == "r")
            {
                victor = "Player 1";
            }
            else if(player2choice == "s")
            {
                victor = "Player 2";
            }
        }
        else if(player1choice == "s")
        {
            if(player2choice == "p")
            {
                victor = "Player 1";
            }
            else if(player2choice == "r")
            {
                victor = "Player 2";
            }
        }
    }   

//Error at CandyLand.cpp:355:38 and CandyLand.cpp:362:38: The addCandy function in your Player class is expecting a Candy object, but findCandy is returning a CandyLand::Candy object. You need to make sure these types match.
    if(victor == "Player 1")
    {
        cout << "Player 1 has won " << player2candy << " from player 2!" << endl;

       // players[0].addCandy(findCandys(player2candy));
        players[1].removeCandy(player2candy);
    }
    else if(victor == "Player 2")
    {
        cout << "Player 2 has won " << player1candy << " from player 1!" << endl;

       // players[1].addCandy(findCandys(player1candy));
        players[0].removeCandy(player1candy);
    }
}



// string CandyLand::  printCharacterInventory(Player) // found in player
// {
//     stringstream ss1;
//     stringstream ss2;
//     stringstream ss3;

//     int candies = 9;
//         for(int i = 0; i < candies; i++)
//         {
//             if(_inventory[i].name == "")
//             {
//                 _inventory[i].name = "Empty";
//             }
//         }
//         ss1 << "|[" << _inventory[0].name << "]|" << "[" << _inventory[1].name << "]|" << "|[" << _inventory[2].name << "]|" << endl;
//         ss2 << "[" << _inventory[3].name << "]|" << "|[" << _inventory[4].name << "]|" << "[" << _inventory[5].name << "]|" << endl;
//         ss3 << "|[" << _inventory[6].name << "]|" << "[" << _inventory[7].name << "]|" << "|[" << _inventory[8].name << "]|" << endl;

//         return ss1.str() + ss2.str() + ss3.str();
// }

void CandyLand:: characterSelect()
{
    cout << "Welcome to the game of Candyland. Please enter the number of participants: " << endl;
    int players = 2;
    int characters_used = 0;
    string playerschoice;
    char storechoice;
    cin >> players;
    Player player1;
    Player player2;


    for(int i = 0; i < players; i++)
    {
        cout << "Enter Player name:" << endl;
        string inname;
        cin >> inname;
        player[i].setPlayerName(inname);

        cout << "Awesome! Here is a list of characters a player can select from:" << endl;
        for(int j = 0; j < characters_used; j++)
        {
        cout << "Name: " << characterlist[i].charactername << endl;
        cout << "Stamina: " << characterlist[i].stamina << endl;
        cout << "Gold: " << characterlist[i].gold << endl;
        cout << "Candies: " << /*characterlist[i].character_inventory() << */endl;
        cout << "----------------------------------------------------------------------" << endl;
        }
        cout << "The Selected Character is:" << endl;
        cin >> playerschoice;
        characters_used++;
        cout << "Do you want to visit the candy store? (y/n)" << endl;
        cin >> storechoice;
        if(storechoice == 'y')
        {
            CandyStore();
        }
        
    }
}
//error: 'CandyLand::Character CandyLand::findCharacter(std::string, int)' cannot be overloaded with 'CandyLand::Character CandyLand::findCharacter(std::string, int)'
    // Character CandyLand::findCharacter (string charactername, int playercount)
    // {
    //     Character character;
    //     for(int i = 0; i < playercount; i++)
    //     {
    //         if(character[i].name == charactername)
    //         {
    //             return [i];
    //         }
    //     }
    //     return character[i];
    // }