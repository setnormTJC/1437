//
// Created by Work on 9/16/2026.
//

//this file specifies what it means to be an RNGWrapper class

#ifndef INC_1437_RNGWRAPPER_H
#define INC_1437_RNGWRAPPER_H

#include<random>

//using namespace std;

class RNGWrapper
{
private:
    std::mt19937 rng;

public:
    RNGWrapper();

    ///@returns ... a random number (int) between 0 and N (inclusive?)
    int getRandomNumberBetween0AndN(int N);

};


#endif //INC_1437_RNGWRAPPER_H
