#include <iostream>
void remove_package()
{
    std::string package_name;
    std::cout << "Package name: >> ";
    std::cin >> package_name;
    std::string syscommand;
    syscommand = ("sudo apt remove " + package_name);
    system(syscommand.c_str());
}