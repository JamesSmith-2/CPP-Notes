#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
using namespace std;

struct Candy
{
    string name;
    string description;
    string effect_type;
    int effect_value;
    string type;
    double price;
};
class Player
{
    public:
    
    //default constructor
    Player();

    //parameterized constructor
    Player(int, double, string, Candy[], const int);

    //setters
    void setStamina(int);
    void setGold(double);
    void setPlayerName(string);
    void setEffect(string);

    //getters
    int getCandyAmount();
    int getStamina();
    double getGold();
    string getEffect();
    string getPlayerName();

    int getPlayerPosition() const;

    //other
    void printInventory();
    Candy findCandy (string);
    bool addCandy(Candy);
    bool removeCandy(string);

    void chooseCharacter(string);
    // void loadCharacter(string);

    private:
    
    int _player_position;
    string _player_name;
    string _charactername;
    const static int _MAX_CANDY_AMOUNT = 9;
    int _stamina;
    double _gold;
    string _effect;
    Candy _inventory[_MAX_CANDY_AMOUNT];
    int _candy_amount;



};
#endif