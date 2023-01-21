#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <cstring>
#include <sstream>
#include "help.cpp"
#include "neofetch.cpp"
#include "systerminal.cpp"
#include "install-package.cpp"
#include "remove-package.cpp"
#include "purge-package.cpp"
#include "autoremove-packages.cpp"
#include "update-packages.cpp"
#include "upgrade-packages.cpp"
#include "full-upgrade.cpp"
#include "update-specific.cpp"
#include "system-upgrade.cpp"
#include "cd.cpp"
#include "ls.cpp"
#include "mkdir.cpp"
#include "rm.cpp"
#include "rmdir.cpp"
#include "touch.cpp"
int main()
{
    bool setup_complete = false;
    std::cout << "WARNING/INFO: Please run \"setup\" to set up the terminal." << std::endl;
    while (true)
    {
        std::string command;
        std::cout << "setup@cterm~$ ";
        std::cin >> command;
        if (command == "setup")
        {
            std::string accepted;
            std::cout << "Before starting the setup, please make sure you know what you're doing by reading this page: https://cterm.adriansmp.ga" << std::endl;
            std::cout << "Do you want to continue with the setup? [yes / no] >> ";
            std::cin >> accepted;
            if (accepted == "yes")
            {
                std::cout << "Starting setup, please wait. This might take a few minutes depending on your PC and your internet speed." << std::endl;
                system("which cmatrix > cmatrix_installed.txt");
                std::ifstream cmatrix_installed("cmatrix_installed.txt");
                system("which python3 > python3_installed.txt");
                std::ifstream python3_installed("python3_installed.txt");

                system("which neofetch > neofetch_installed.txt");
                std::ifstream neofetch_installed("neofetch_installed.txt");
                std::string neofetch_str;
                std::string cmatrix_str;
                std::string python3_str;
                if (neofetch_installed)
                {
                    std::ostringstream neofetch_check;
                    neofetch_check << neofetch_installed.rdbuf();
                    neofetch_str = neofetch_check.str();
                }
                if (cmatrix_installed)
                {
                    std::ostringstream cmatrix_check;
                    cmatrix_check << cmatrix_installed.rdbuf();
                    cmatrix_str = cmatrix_check.str();
                }
                if (python3_installed)
                {
                    std::ostringstream python3_check;
                    python3_check << python3_installed.rdbuf();
                    python3_str = python3_check.str();
                }
                std::cout << neofetch_str;
                std::cout << cmatrix_str;
                std::cout << python3_str;
                if (neofetch_str == "/usr/bin/neofetch")
                {
                    std::cout << "neofetch is installed.";
                }
                else
                {
                    system("sudo apt install neofetch -y");
                }
                if (cmatrix_str == "/usr/bin/cmatrix")
                {
                    std::cout << "cmatrix is isntalled.";
                }
                else
                {
                    system("sudo apt install cmatrix -y");
                }
                if (python3_str == "/usr/bin/python3")
                {
                    std::cout << "python3 is installed.";
                }
                else
                {
                    system("sudo apt install python3 -y");
                }
                bool setup_complete = true;
                system("clear");
                std::cout << "Setup complete." << std::endl;
                std::cout << "  _____ _______" << std::endl;
                std::cout << " / ____|__   __|" << std::endl;
                std::cout << "| |       | | ___ _ __ _ __ ___" << std::endl;
                std::cout << "| |       | |/ _ \\ '__| '_ ` _ \\ " << std::endl;
                std::cout << "| |____   | |  __/ |  | | | | | |" << std::endl;
                std::cout << " \\_____|  |_|\\___|_|  |_| |_| |_|" << std::endl;
                while (setup_complete == true)
                {
                    std::string command;
                    std::cout << "user@cterm~$ ";
                    std::cin >> command;
                    //Start functions
                    if (command == "help")
                    {
                        help();
                    }
                    else if (command == "systerminal")
                    {
                        systerminal();
                    }
                    else if (command == "neofetch")
                    {
                        neofetch();
                    }
                    else if (command == "install-package")
                    {
                        install_package();
                    }
                    else if (command == "purge-package")
                    {
                        purge_package();
                    }
                    else if (command == "remove-package")
                    {
                        remove_package();
                    }
                    else if (command == "autoremove-packages")
                    {
                        autoremove_packages();
                    }
                    else if (command == "update-packages")
                    {
                        update_packages();
                    }
                    else if (command == "upgrade-packages")
                    {
                        upgrade_packages();
                    }
                    else if (command == "full-upgrade")
                    {
                        full_upgrade();
                    }
                    else if (command == "update-specific")
                    {
                        update_specific();
                    }
                    else if (command == "system-upgrade")
                    {
                        system_upgrade();
                    }
                    else if (command == "cd")
                    {
                        cd();
                    }
                    else if (command == "ls")
                    {
                        ls();
                    }
                    else if (command == "mkdir")
                    {
                        mkdir();
                    }
                    else if (command == "rm")
                    {
                        rm();
                    }
                    else if (command == "rmdir")
                    {
                        rmdir();
                    }
                    else if (command == "touch")
                    {
                        touch();
                    }
                    else if (command == "clear")
                    {
                        system("clear");
                    }
                    else if (command == "exit")
                    {
                        std::cout << "Logout" << std::endl;
                        return 0;
                    }
                    else
                    {
                        std::cout << command + ": command not found." << std::endl;
                    }
                }
            }
            else
            {
                std::cout << "Abort.";
                return 0;
            }
        }
        else
        {
            std::cout << "Please run \"setup\" first, dependency install required." << std::endl;
        }
    }
}