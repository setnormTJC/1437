


#include "Bigfoot.h"
#include"readDictionary.h"
#include"structDemos.h"
#include"utils.h"


int main()
{
    Bigfoot bigfoot;

    Bigfoot otherBigfoot(90u, "black", 20.0f);

    unsigned int newHeight = 95;
    otherBigfoot.setHeight(newHeight);

    std::cout << otherBigfoot.getHeight() << "\n";



    return 0;
}


