#include <iostream>
void touch()
{
    std::string filename;
    std::cin >> filename;
    std::string command;
    command = ("cd virtual_filesystem && touch "+ filename);
    system(command.c_str());
}