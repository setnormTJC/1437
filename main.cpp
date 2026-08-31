


#include"readDictionary.h"
#include"structDemos.h"
#include"utils.h"


struct Ammunition
{
    double mass;
    double volume;
    std::string name;


};

struct Fowl
{
    // Height height;
    double height;
    std::vector<std::string> colorsOfFeathers = {"blue", "greeen"};
};




int main()
{

    std::string filepath = "C://Users//Work//Desktop//Fall 2026//1437//res//PeopleDeets.ssv";

    auto people_data = readPeopleDataIntoArray(filepath);

    // for (int i =  0; i < people_data.size(); ++i) //an alternative syntax to the line below
    // for (Person currentPersonData : people_data)
    // {
    //     std::cout << currentPersonData.name << "\n";
    // }

    float averageAge = calculateAverageAge( people_data);

    auto words = getDictionaryWords();

    std::mt19937 rng(std::random_device{}());

    std::uniform_int_distribution<int> distribution(0, words.size() - 1);

    while (true)
    {
        int randomIndex = distribution(rng);
        std::cout << "Random index: " << randomIndex << " and the word in the dict at that index is: "
            << words[randomIndex] << "\n";

        std::cin.get(); //forces user to press Enter before continuing

    }


    return 0;
}


