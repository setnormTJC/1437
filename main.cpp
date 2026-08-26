


#include"utils.h"
#include"structDemos.h"




int main()
{
    std::cout << "Enter your name (an ambiguous prompt):\n";
    std::string firstName;
    std::string lastName;

    std::cin >> firstName; //character input getch()
    std::cin >> lastName;

    std::cout << "You entered firstName " << firstName << " lastName: " << lastName << '\n';

    return 0;
}


