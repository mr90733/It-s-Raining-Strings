
#pragma once

#include <vector>

#include <string>

class raining

{

private:
    std::vector<std::string> businesses;

public:

    void addBusiness(const std::string& name);

    void showBusinesses() const;

    bool continueEntering(const std::string& input) const;

};