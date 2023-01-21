#include <iostream>
void mkdir()
{
    std::string dirname;
    std::cin >> dirname;
    std::string command;
    command = ("cd virtual_filesystem && mkdir "+ dirname);
    system(command.c_str());
}