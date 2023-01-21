#include <iostream>
void cd()
{
    std::string cdirname;
    std::cin >> cdirname;
    std::string command;
    command = ("cd virtual_filesystem && cd "+ cdirname);
    system(command.c_str());
}