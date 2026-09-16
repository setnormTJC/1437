//
// Created by Work on 9/16/2026.
//

#include "RNGWrapper.h"

RNGWrapper::RNGWrapper()
    :
rng(std::random_device{}())
{
}

int RNGWrapper::getRandomNumberBetween0AndN(int N)
{
    std::uniform_int_distribution<int> randomDistribution(0, N);
    int theRandomValue = randomDistribution(rng);
    return theRandomValue; //let's all look into modular arithmetic for cryptography
}

