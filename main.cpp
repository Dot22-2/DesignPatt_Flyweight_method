#include "UserFactory.hpp"
#include <iostream>
#include <vector>

struct Session {
    std::string username;
    User* sharedUser;
};

int main() {
    UserFactory factory;
    std::vector<Session> sessions = {
        {"Dmytro", factory.getUser("Admin")},
        {"Olena", factory.getUser("Guest")},
        {"Maks", factory.getUser("Admin")},
        {"Diana", factory.getUser("Guest")}
    };

    for (const auto& s : sessions) {
        std::cout << s.username << " -> Role: " << s.sharedUser->getRole() << "\n";
    }

    return 0;
}
