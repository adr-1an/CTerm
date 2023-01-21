#include <iostream>
void rmdir()
{
    std::string dirname;
    std::cin >> dirname;
    std::string command;
    command = ("cd virtual_filesystem && rmdir "+ dirname);
    system(command.c_str());
}