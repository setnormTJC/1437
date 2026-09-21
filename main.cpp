

#include<filesystem>
#include<iostream>

#include "Bigfoot.h"
#include "ImageBMP.h"
#include "InventoryItem.h"
#include"RNGWrapper.h"
#include"readDictionary.h"
#include"structDemos.h"
#include"utils.h"

#include<thread> //for parallel processing

class Car
{
    std::string make = "Ford";
    int numberOfMiles = 99'999;

    //int someNumber = INT_MAX + 1; //overflows!

    Car() = default;
    // Car(/*insert params here*/)
    // {
    //
    // }

    ///@brief based on car's make and mileage, estimates a USD value
    double calculateCarValue()
    {
        double value = 0.0;

        if (make == "Toyota")
        {
            value += 3'000;
        }

        else if (make == "Ford")
        {
            value += 500;
        }

        return value;
    }

};



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
    std::filesystem::directory_iterator directoryIterator("."); //parameterized constructor of the
    //directory_iteratory class (inside the filesystem namespace)

    for (const auto& directoryEntry : directoryIterator)
    {
        if (directoryEntry.path().string().find(".txt") != std::string::npos)
        {
            //std::cout << directoryEntry.path() << "\n";

            // std::cout << directoryEntry.file_size() << "\n";

            //directoryEntry.
        }

    }
    return 0;
}


