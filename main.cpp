
#include <iostream>
#include <string>

int main() {
    std::string name;

    std::cout << "Welcome to my first C++ project!\n";
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Hello, " << name << "!\n";

    return 0;
}
