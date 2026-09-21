#include "ImageBMP.h"

#include<map>
#include<string>

void demoSomeClassThings()
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

        imageBMP.pixelData.pixelMatrix[x][100] = ColorEnum::Green;
    }

    std::string filename = "aGLORIOUSimage.bmp";

    imageBMP.writeImageFile("aGLORIOUSimage.bmp");

    std::system(filename.c_str());

}

void demoMapDataStructure()
{
    std::map<string, int> namesToAges =
    {
        {"Seth", 37},
        {"Chase", 28},
        {"Overstreet", 23},
        {"Seth", 92}
    };

    std::cout << namesToAges["Sethadfadsf"] << "\n";

    std::cout << "Seth is in the list this many times: "
        << namesToAges.count("Seth") << "\n";

}


void demoStdChrono()
{
    std::string someString();

    // std::cout << someString << "\n";

    std::vector<int> nums = {1, 2, 3, 4};

    auto startTime = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < 10'000'000; ++i)
    {
        //do nothing
    }

    auto stopTime = std::chrono::high_resolution_clock::now();

    std::cout << "That loop took this many NANOseconds "
        << (stopTime - startTime).count() << "\n";

    //std::filesystem

}
