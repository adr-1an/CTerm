#include <iostream>
void systerminal()
{
    std::string cmd;
    std::cout << "System terminal - type \"EXIT\" to exit." << std::endl;
    std::cout << "WARNING/INFO: This is your system's terminal, you may damage your system." << std::endl;
    while (true)
    {
        std::cout << "system@terminal~$ ";
        std::cin >> cmd;
        system(cmd.c_str());
        if (cmd == "EXIT")
        {
            system("clear");
            return;
        }
    }
}