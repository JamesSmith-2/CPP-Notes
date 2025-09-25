#include <iostream>

using namespace std;


/*conversion notes
Base	        Rate
1 gold coin	    23 silver coins
1 silver coin	13 bronze coins
1 bronze coin	3 iron coins
*/

int main()
{
    int iron_coin, gold_coin, silver_coin, bronze_coin;   
    int gold_conv = 3 * 13 * 23;
    int silver_conv = 39;
    int bronze_conv = 3;

    cout << "Enter the number of iron coins: " << endl;
    cin >> iron_coin;

    //gold conversion
    gold_coin = iron_coin / gold_conv;
    iron_coin = iron_coin % gold_conv;
    //silver conversion
    silver_coin = iron_coin / silver_conv;
    iron_coin = iron_coin % silver_conv;
    //bronze conversion
    bronze_coin = iron_coin / bronze_conv;
    iron_coin = iron_coin % bronze_conv;
    // tell user how much they have
    cout << gold_coin << " gold coin(s) " << silver_coin << " silver coin(s) " << bronze_coin << " bronze coin(s) " << iron_coin << " iron coin(s)" << endl;

    return 0;
}