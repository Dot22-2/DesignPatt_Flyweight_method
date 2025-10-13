#pragma once
#include "User.hpp"
#include <unordered_map>
#include <string>

class UserFactory {
private:
    std::unordered_map<std::string, User*> pool;

public:
    ~UserFactory();
    User* getUser(const std::string& role);
};
