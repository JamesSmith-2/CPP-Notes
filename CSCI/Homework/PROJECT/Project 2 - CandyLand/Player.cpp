#include <iostream>
#include <fstream>
#include <sstream>

#include "Player.h"

using namespace std;

/**
 *  const static int _MAX_CANDY_AMOUNT = 4;
    int _stamina;
    double _gold;
    string _effect;
    Candy _inventory[MAX_CANDY_AMOUNT];
    int _candy_amount;
*/
// struct Candy
// {
//     string name;
//     string description;
//     string effect_type;
//     int effect_value;
//     string type;
//     double price;
// };

struct Character
{
    string charactername;
    int stamina;
    int gold;
    Candy character_inventory;

};

 //default constructor
    Player::Player()
    {
        _player_name = "";
        Candy emptycandy;
        _stamina = 0;
        _gold = 0;
        _candy_amount = 0;
        _effect = "";
        for(int i = 0; i < _MAX_CANDY_AMOUNT; i++)
        {
            _inventory[i] = emptycandy;
        }
    }

    //parameterized constructor
     Player::Player(int stamina, double gold, string effect, Candy inventory[], const int CANDY_ARR_SIZE)
    {
        _player_name = "";
        _stamina = stamina;
        _gold = gold;
        _effect = effect;
        Candy emptycandy;
            emptycandy.name = "Empty";
        for(int i = 0; i < _MAX_CANDY_AMOUNT; i++)
        {
        _inventory[i] = emptycandy;
        }
        for(int i = 0; i < CANDY_ARR_SIZE; i++)
        {
            _inventory[i] = inventory[i];

            if(_inventory[i].name == "Empty")
            {
                _candy_amount = 0;
            }
            else
            {
                _candy_amount = CANDY_ARR_SIZE;
            }
        }

    }

    //setters
    void Player::setStamina(int stamina)
    {
        _stamina = stamina;
    }
    void Player::setGold(double gold)
    {
        _gold = gold;
    }
    void Player::setEffect(string effect)
    {
        _effect = effect;
    }
    void Player::setPlayerName(string name)
    {
        _player_name = name;
    }

int Player::getPlayerPosition() const
{
    return _player_position;
}

    //getters
    int Player::getCandyAmount()
    {
        return _candy_amount;
    }
    int Player::getStamina()
    {
        return _stamina;
    }
    double Player::getGold()
    {
        return _gold;
    }
    string Player::getEffect()
    {
        return _effect;
    }
    string Player::getPlayerName()
    {
        return _player_name;
    }

    //other
    void Player::printInventory()
    {
        for(int i = 0; i < _candy_amount; i++)
        {
            if(_inventory[i].name == "")
            {
                _inventory[i].name = "Empty";
            }
        }
        cout << "|[" << _inventory[0].name << "]|" << "[" << _inventory[1].name << "]|" << "|[" << _inventory[2].name << "]|" << endl;
        cout << "[" << _inventory[3].name << "]|" << "|[" << _inventory[4].name << "]|" << "[" << _inventory[5].name << "]|" << endl;
        cout << "|[" << _inventory[6].name << "]|" << "[" << _inventory[7].name << "]|" << "|[" << _inventory[8].name << "]|" << endl;
    }
    Candy Player::findCandy (string candy_name)
    {
        Candy candy;
        for(int i = 0; i < _MAX_CANDY_AMOUNT; i++)
        {
            if(_inventory[i].name == candy_name)
            {
                return _inventory[i];
            }
        }
        return candy;
    }
    bool Player::addCandy(Candy candy)
    {
        if(_candy_amount < _MAX_CANDY_AMOUNT)
        {
            _inventory[_candy_amount] = candy;
            _candy_amount++;

            return true;
        }
        else
        {
            return false;
        }
    }
    bool Player::removeCandy(string candy_name)
    {
        int inventoryCount = 0;
        int i = 0;
        string candy_name_size;
        int candy_size = candy_name_size.length();
        string search_candy_name_size;
        int search_candy_size = search_candy_name_size.length();
        

        while(i < candy_size)
        {
            if(candy_name[i] >= 'A' && candy_name[i] <= 'Z')
            {
                candy_name[i] = candy_name[i] - 'A' + 'a';
            }
            i++;
        }
        for(int k =0; k < candy_size; k++)
        {
            string search_candy_name = _inventory[i].name;
            int j = 0;
            while(j < search_candy_size)
        {
            if(search_candy_name[i] >= 'A' && search_candy_name[i] <= 'Z')
            {
                search_candy_name[i] = search_candy_name[i] - 'A' + 'a';
            }
            j++;
        }
            if(search_candy_name == candy_name)
            {
                for (int j = i; j < _candy_amount -1; j++)
                {
                    _inventory[j] = _inventory[j + 1];
                }
                inventoryCount--;
                _candy_amount--;
                return true;
            }
        }
        return false;
    }

    // void Player::loadCharacters(string charactername)
    // {


    //     // ifstream filein("characters.txt");
    //     // string line;
    //     // while(getline(filein, line))
    //     //     {
    //     //         stringstream sso(line);
    //     //         string stamina;
    //     //         string gold;
    //     //         getline(sso, character.name, '|');
    //     //         getline (sso, stamina, '|');
    //     //         character.stamina = stoi(stamina);
    //     //         getline(sso, gold, '|');
    //     //         character.gold = stoi(gold);
    //     //     }
    //     // apply charactername to _charactername
    //     // apply each of the values from the chosen struct to the player profile
    // }

    void Player::chooseCharacter(string characterchoice)
    {
        // build something here i beg
    }
