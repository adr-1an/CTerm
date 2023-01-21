#include <iostream>
void update_specific()
{
    std::string package_name;
    std::string syscommand;
    std::cout << "Which package do you want to update? >> ";
    std::cin >> package_name;
    syscommand = ("sudo apt install --only-upgrade " + package_name);
    system(syscommand.c_str());
}