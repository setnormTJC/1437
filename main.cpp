

#include<iostream>

#include "Bigfoot.h"
#include "InventoryItem.h"
#include"RNGWrapper.h"
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
    RNGWrapper rngWrapper;

    int N = 500;

    for (int i = 0; i < 500; ++i)
    {
        auto result = rngWrapper.getRandomNumberBetween0AndN(N);
        std::cout << result << " ";
    }




    return 0;
}


