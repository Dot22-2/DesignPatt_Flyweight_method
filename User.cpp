#include "User.hpp"

User::User(const std::string& r) : role(r) {}

std::string User::getRole() const {
    return role;
}
