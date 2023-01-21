#include <iostream>
void echo()
{
    std::string echo;
    std::string cmd;
    std::cin >> echo;
    cmd = "echo "+ echo;
    system(cmd.c_str());
}