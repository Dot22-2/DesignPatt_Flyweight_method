#pragma once
#include <string>

class User {
private:
    std::string role;
public:
    User(const std::string& r);
    std::string getRole() const;
};
