#include "raining.hpp"
#include <iostream>
#include <cctype>

void sortBusinesses(std::vector<std::string>& vec) {

    for (size_t i = 0; i < vec.size(); ++i) {

        for (size_t j = 0; j < vec.size() - i - 1; ++j) {

            if (vec[j] > vec[j + 1]) {

                std::string temp = vec[j];

                vec[j] = vec[j + 1];

                vec[j + 1] = temp;
            }
        }
    }
}


void raining::addBusiness(const std::string& name)

{
    businesses.push_back(name);

    sortBusinesses(businesses);
}


void raining::showBusinesses() const

{
    std::cout << "\nYour businesses are:\n";

    for (const auto& business : businesses)

        {
        std::cout << "    " << business << "\n";
    }
}


bool raining::continueEntering(const std::string& input) const

{
    std::string lowerInput;

    for (char c : input) lowerInput += std::tolower(c);

    return (lowerInput == "y" || lowerInput == "yes");
}