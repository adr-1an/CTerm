#include <iostream>
void help()
{
    std::cout << "Terminal - Help" << std::endl;
    std::cout << "sysinfo - Show system information." << std::endl;
    std::cout << "install-package - Install a package using APT." << std::endl;
    std::cout << "purge-package - Purge a package." << std::endl;
    std::cout << "remove-package - Remove a package." << std::endl;
    std::cout << "autoremove - Autoremove useless / temporary packages." << std::endl;
}