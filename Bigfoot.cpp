//
// Created by Work on 9/2/2026.
//

#include "BigFoot.h"

//::is the "scope resolution operator"
Bigfoot::Bigfoot() = default;

Bigfoot::Bigfoot(unsigned int height, const std::string furColor, float shoeSize)
    :
height(height), furColor(furColor), shoeSize(shoeSize)
{
    // this->height = height; //not so common anymore
    //this remains empty
}


unsigned int Bigfoot::getHeight() const
{
    return height;
}

void Bigfoot::setHeight(int newHeight)
{
    height = newHeight;
}
