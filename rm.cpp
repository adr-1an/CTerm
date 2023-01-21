#include <iostream>
void rm()
{
    std::string rmfile;
    std::cin >> rmfile;
    std::string command;
    command = ("cd virtual_filesystem && rm -rf "+ rmfile);
    system(command.c_str());
}