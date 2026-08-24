#include<algorithm>
#include<fstream>
#include<iostream>
#include<random>
#include<string>
#include<vector>

// Christopher Coyle I am write[sic] here, yup. J
// Andrew Wyatt
// lin sims
// Joshua Tucker here//
//Brendan Overstreet
//Abiral Khakural
//Chase Cox // There are
//Jaidon Gentry new to
//Timothy Durham, "I LIKE TRAINS!!!"
// using namespace std;

void demoWritingAnOuputFile()
{
    std::string filepath = "C://Users//Work//Desktop//outputFile.txt";

    std::ofstream fout(filepath); //r******* filepath

    for (int i = 0; i < 1'000; ++i)
    { //Allman (BSD) style braces (use K and R style if you want to drive me crazy)
        fout << "Zebras?\n";
    }

    fout.close();

}

void demoGeneratingRandomNumbersBetweenMinAndMax(int min, int max, int numberOfNumbersToPrint)
{
    //rand()//bad boy
    std::mt19937 rng(std::random_device{}());


    std::uniform_int_distribution<int> distribution(min, max);

    std::vector<int> numbers;

    for (int i = 0; i < numberOfNumbersToPrint; ++i)
    {
        auto result = distribution(rng);
        //std::cout << 1 << "\n";

        numbers.push_back(result);
    }
    int a= 123;

}

int main()
{

    std::string filename = "C:\\Users\\Work\\Desktop\\Fall 2026\\1437\\roster.txt";
    std::ifstream fin(filename);

    if (!fin)
    {
        std::cerr << "Could not find file " << filename << "\n";
        return -1; //an arbitrary error code (we'll talk about throwing "exceptions" later)
    }

    std::string currentName; //
    std::vector<std::string> names;
    while (std::getline(fin, currentName)) //indefinite loop (for loops can be definite - ex: run until i !< 40
    {
        //std::cout << currentName << "\n";
        names.push_back(currentName);
    }

    std::mt19937 rng(std::random_device{}());


    auto whatIsTheBeginThing = names.begin();  //auto is car?
    //auto thing = 23.0;

    std::shuffle(names.begin(), names.end(), rng);

    for (std::string name : names)
    {
        std::cout << name << "\n";
        std::cin.get(); //forces user to press enter before continuing to next name:
    }


    return 0;
}


