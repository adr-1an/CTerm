#include <iostream>
void install_package()
{
    std::string package_name;
    std::cout << "Package name: >> ";
    std::cin >> package_name;
    std::string syscommand;
    syscommand = ("sudo apt install " + package_name);
    system(syscommand.c_str());
}