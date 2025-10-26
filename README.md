# C++ Flyweight Method

This repository demonstrates a clean implementation of the **Flyweight** design pattern in C++ for a console-based application.

---

## Project Structure

- `User.hpp / User.cpp` – Represents user objects with shared and unique state  
- `UserFactory.hpp / UserFactory.cpp` – Manages flyweight instances and ensures reuse  
- `main.cpp` – Entry point showcasing memory-efficient object creation  

---

### Requirements

- **Compiler**: Tested with `MSVC v19.44` (Visual Studio 2022)  
- **C++ Standard**: C++17 or higher  

---

## Usage Example

```cpp
UserFactory factory;
std::vector<Session> sessions = {
    {"Dmytro", factory.getUser("Admin")},
    {"Olena", factory.getUser("Guest")}
};
for (const auto& s : sessions) {
    std::cout << s.username << " -> Role: " << s.sharedUser->getRole() << "\n";
}

// Output
// Dmytro -> Role: Admin
// Olena -> Role: Guest
