//
// Created by Work on 8/26/2026.
//

#include"structDemos.h"

#include<fstream>
#include <iostream>

void demoSimpleStructThing()
{
    std::vector<Person> people;

    Person me;

    me.age = 38;
    me.name = "Sepharoo";
    me.isAlive = true;

    std::cout << me.name << "\n";
}


std::vector<Person> readPeopleDataIntoArray(const std::string& filename)
{
    std::ifstream fin(filename);

    if (!fin)
    {
        std::cout << "File " << filename << " not found\n";

        return {}; //the empty (an?) vector
    }

    //begin parsing
    std::vector<Person> people;
    //istringstream //this is one way to go with parsing

    while (!fin.eof())
    {
        Person currentPerson; //Computer Org. And Architecture

        fin >> currentPerson.name;
        fin >> currentPerson.age;
        fin >> currentPerson.isAlive;

        people.push_back(currentPerson);
    }

    fin.close(); //always close the file (in case, for example, coworkers access that file later, mid-program execution

    return people;
}

float calculateAverageAge(const std::vector<Person> &people)
{
    //implement the function!
    float sumOfAllAges = 0.0f;
    for (Person currentPerson : people)
    {
        sumOfAllAges += currentPerson.age;
    }

    std::cout << "Sum of all ages: " << sumOfAllAges << "\n";//sanity check (is this a negative number?)

    return sumOfAllAges/people.size();
}
