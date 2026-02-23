#include <iostream>

#include <string>

#include "src/raining.hpp"

int main()

{
    raining program;

    std::string input;

    std::string continueInput;

    std::cout << "Welcome to the Business Sorting Program!\n";

    while (true)

        {

        std::cout << "\nPlease enter the name of a business: ";

        std::getline(std::cin, input);

        program.addBusiness(input);

        program.showBusinesses();

        std::cout << "\nAnother business? ";

        std::getline(std::cin, continueInput);

        if (!program.continueEntering(continueInput)) break;
    }

    std::cout << "\nThank you for using the Business Sorting Program!\n";

    return 0;
}