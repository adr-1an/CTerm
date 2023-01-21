#include <iostream>
void ls()
{
    std::string ls;
    ls = "cd virtual_filesystem && ls";
    system(ls.c_str());
}