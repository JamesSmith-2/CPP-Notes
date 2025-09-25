#ifndef CANDYLAND_H
#define CANDYLAND_H
#include <iostream>
#include <fstream>
#include <sstream>
#include "Player.h"
#include "Board.h"
using namespace std;


/**
 * \CandyLand
struct -> candy, card, treasure, 
class -> Player, Board, Tile, Store, Riddles, CandyLand, CandyStore, 

Events, Riddles/Puzzle (struct / class), 
*/




class CandyLand
{

    public:

        void startGame(); // leave this public so that the user can only start the game, then the game runs itself

struct Candy
{
    string name;
    string description;
    string effect_type;
    int effect_value;
    string type;
    double price;
};

struct Character
{
    string charactername;
    int stamina;
    int gold;
    vector<Candy> character_inventory;
};

struct Card
{
    string color;
    bool is_double;
};

struct Treasure
{
    int chance;
    int type;
    
};

    private:
        
        void setupGame(); // board and tiles

        // void setupBoard();
        void loadCandies();
        void loadMinigames(int);
        void loadCharacters();
        void characterSelect();
        int drawCard();

        int playerSwap();

        void displayMainMenu();

        string printCharacterInventory(Player);
        Character findCharacter(string, int);

    //    Candy findCandys(string);
        // Character findCharacter (string,int);


        void runRiddle();
        void runRPS(Player player[]);
        void gameLoop(Player player[]);
        void calamity();
        int generateRandom(int, int);
        string activeplayer; 

        Candy frosty_fizz{"Frosty Fizz", "Boosts player's stamina by 10 units", "stamina", 10, "magical", 10};
        Candy lucky_licorice{"Lucky Licorice","Decreases opponents stamina by 10 units", "stamina", -10, "poison", 15};
        Candy ruby_rapture{"Ruby Rapture", "Forms a gummy barrier on a chosen tile and opponent loses 2 turns", "turns",-2, "gummy", 20};
        Candy crimson_crystal{"Crimson Crystal", "Boosts player's stamina by 15 units", "stamina", 15, "magical", 20};
        Candy fearsome_fudge{"Fearsome Fudge", "Forms a gummy barrier on a chosen tile and opponent loses 1 turn", "turns", -1, "gummy", 20};
        Candy venomous_vortex{"Venomous Vortex", "Decreases opponents stamina by 15 units", "stamina", -15, "poison", 20};
        Candy bubblegum_blast{"Bubblegum Blast", "Protects against mild poison candy", "other", 1, "immunity", 15};
        Candy mystic_marshmallow{"Mystic Marshmallow", "Boosts player's stamina by 20 units", "stamina", 20, "magical", 30};
        Candy sparkling_sapphire{"Sparkling Sapphire", "Protects against mild and moderate poison candies", "other", 2, "immunity", 20};
        Candy toxic_taffy{"Toxic Taffy", "Decreases opponents stamina by 20 units", "stamina", -20, "poison", 25};
        Candy caramel_comet{"Caramel Comet", "Protects against all poison candies", "other", 3, "immunity", 25};

    vector<Candy> todd_inventory{frosty_fizz, toxic_taffy, bubblegum_blast, caramel_comet, lucky_licorice};
    vector<Candy> jane_inventory{lucky_licorice, fearsome_fudge, crimson_crystal, ruby_rapture};
    vector<Candy> charlie_inventory{toxic_taffy, frosty_fizz, lucky_licorice, caramel_comet, fearsome_fudge, bubblegum_blast, crimson_crystal};
    vector<Candy> carl_inventory{toxic_taffy, frosty_fizz, lucky_licorice, caramel_comet, fearsome_fudge, bubblegum_blast, crimson_crystal};

        Character toffee_todd{"Toffee_Todd", 200, 20, todd_inventory};
        Character jellybean_jane{"JellyBean_Jane", 100, 50, jane_inventory};
        Character chocolate_charlie{"Chocolate_Charlie", 50, 100, charlie_inventory};
        Character caramel_carl{"Caramel_Carl", 100, 500, carl_inventory};

        Character characterlist[4] = {toffee_todd, jellybean_jane, chocolate_charlie, caramel_carl};

        Board board;
        // Player player;
        Player player[2];
};
#endif

#ifndef RIDDLES_H
#define RIDDLES_H

class Riddles
{
    public:
    

    private:
    string riddle_answer;
    string riddle_text;

};
#endif



// class CandyStore // available in board.h
// {

//     public:

//     private:
//     Candy vector<Candy> available_candies;


// };

/**
 * CandyLand
struct -> candy, card, treasure, 
class -> Player, Board, Tile, Store, Riddles, CandyLand, CandyStore, 

Board -> Player, Tile, Candystore
Player -> 
Candystore -> Candy, Tile
Game -> Player, Tile, Candy, Candystore


Events, Riddles/Puzzle (struct / class), 
 * 0. Setup Game
 *  setup the board -> 83 tiles
 *  place candystores
 *  place special tiles
 *  ...

 * 1. load available candy from file -> candystore, candyland, 
 * 2. Visit candystore -> Board, Candyland
 * 3. Load Charaacters from file
 * 4. Choose a character
 * 5. Choose number of players
 * 
*/

// min -> 1 and max -> 3
// 1 -> pink
// 2 -> green
// 3 -> blue

/**
 * 1 -> 27 : pink tile
 * 28 -> 53 : blue tile
 * 54 -> 82 : green tile
*/