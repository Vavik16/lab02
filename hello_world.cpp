#include <iostream>

int main() {
    std::string name; //variable with name of person
    std::getline(std::cin, name); //enter of name
    std::cout << "Hello world from @" << name << std::endl; // Hello world from @name
    return 0;
}
