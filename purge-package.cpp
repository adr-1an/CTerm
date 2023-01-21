#include <iostream>
void purge_package()
{
    std::string package_name;
    std::cout << "Package name: >> ";
    std::cin >> package_name;
    std::string syscommand;
    syscommand = ("sudo apt purge " + package_name);
    system(syscommand.c_str());
}