//
// Created by Work on 8/31/2026.
//

#include "readDictionary.h"

#include <fstream>
#include <iostream>

std::vector<std::string> getDictionaryWords()
{
    std::vector<std::string> dictionaryWords;

    std::system("cd");

    std::string filename = "../res/25KwordDictionary.txt";
    //note that the above is a RELATIVE filepath

    std::ifstream fin(filename);

    if (!fin)
    {
        std::cout << "Could not find file: " << filename << "\n";
        return {};
    }

    std::string currentWord;
    std::vector<std::string> allWords;
    while (std::getline(fin, currentWord))
    {
        allWords.push_back(currentWord);
    }

    return allWords;
}
