


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

    std::vector<InventoryItem> itemsInStore;
    itemsInStore.push_back(shoes);

   //in-place creation of InventoryItem
    itemsInStore.push_back({"Metal tent stakes", 2.75, 999});

    for (int i = 0; i < itemsInStore.size(); ++i)
    {
        itemsInStore[i].print();
    }

    return 0;
}


