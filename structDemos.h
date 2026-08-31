#include<string>
#include <vector>


struct Person
{
    std::string name;
    int age;
    bool isAlive;
};

// struct Student : public Person //in Java, keyword "extends" is used instead of :
// {
//
// };

std::vector<Person> readPeopleDataIntoArray(const std::string& filename);

float calculateAverageAge(const std::vector<Person>& people);

void demoSimpleStructThing(); //function declaration