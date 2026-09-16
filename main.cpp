

#include<iostream>

#include "Bigfoot.h"
#include "ImageBMP.h"
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

    // RNGWrapper rngWrapper;
    //
    // int N = 500;
    //
    // for (int i = 0; i < 500; ++i)
    // {
    //     auto result = rngWrapper.getRandomNumberBetween0AndN(N);
    //     std::cout << result << " ";
    // }

    int imageWidth = 400;
    ImageBMP imageBMP(imageWidth, 600, ColorEnum::RedBgrd);

    for (int x = 1; x < imageWidth/2; ++x)
    {
        imageBMP.pixelData.pixelMatrix[x][50] = ColorEnum::Cyan;
    }

    std::string filename = "aGLORIOUSimage.bmp";

    imageBMP.writeImageFile("aGLORIOUSimage.bmp");

    std::system(filename.c_str());






    return 0;
}


