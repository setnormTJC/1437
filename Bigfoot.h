//
// Created by Work on 9/2/2026.
//

#ifndef INC_1437_BIGFOOT_H
#define INC_1437_BIGFOOT_H
#include <string>


class Bigfoot
{
    //spec file (briefly tells you what methods exist and also which member variables exist)
    unsigned int height = 0u; //in inches (not feet inches) NEGATIVE heights????
    std::string furColor; //eye Color -> Blue Brown (char)
    float shoeSize = 0.0f;//ex: 11.5

public:
    ///@brief This guy is a "default constructor" (constructors are member functions of a class <br>
    ///that have the same name as the class name)
    Bigfoot();

    // unsigned int height, const std::string furColor, float shoeSize
    Bigfoot(unsigned int height, const std::string furColor, float shoeSize);

    unsigned int getHeight() const;  //be const-correct!

    void setHeight(int newHeight);


};


#endif //INC_1437_BIGFOOT_H
