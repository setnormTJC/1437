


#include "Bigfoot.h"
#include "InventoryItem.h"
#include"readDictionary.h"
#include"structDemos.h"
#include"utils.h"

void demoBigStuff()
{
    Bigfoot bigfoot;
    //std::cout << bigfoot.height << "\n"; //inaccessible!

    Bigfoot otherBigfoot(90u, "black", 20.0f);

    unsigned int newHeight = 95;
    otherBigfoot.setHeight(newHeight);

    std::cout << otherBigfoot.getHeight() << "\n";

    std::string word;

}


int main()
{
    InventoryItem shoes("Altra Olympus 6", 129.99, 10);

    std::cout << shoes.getItemName() << "\n";

    return 0;
}


