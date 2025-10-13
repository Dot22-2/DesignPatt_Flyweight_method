#include "UserFactory.hpp"

UserFactory::~UserFactory() {
    for (auto& pair : pool)
        delete pair.second;
}

User* UserFactory::getUser(const std::string& role) {
    if (pool.find(role) == pool.end())
        pool[role] = new User(role);
    return pool[role];
}
