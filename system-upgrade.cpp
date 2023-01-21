#include <iostream>
void system_upgrade()
{
    std::cout << "Upgrading the system, this shouldn't take long. Please do not stop this process as it might lead to data corruption." << std::endl;
    system("mkdir update_backup");
    system("mv echo.cpp update_backup");
    system("mv autoremove-packages.cpp update_backup");
    system("mv full-upgrade.cpp update_backup");
    system("mv help.cpp update_backup");
    system("mv install-package.cpp update_backup");
    system("mv main.cpp update_backup");
    system("mv neofetch.cpp update_backup");
    system("mv purge-package.cpp update_backup");
    system("mv remove-package.cpp update_backup");
    system("mv setup.sh update_backup");
    system("mv system-upgrade.cpp update_backup");
    system("mv systerminal.cpp update_backup");
    system("mv update-packages.cpp update_backup");
    system("mv update-specific.cpp update_backup");
    system("mv upgrade-packages.cpp update_backup");
    system("mv README.txt update_backup");
    system("mv system-upgrade.cpp update_backup");
    system("mv upgrade-packages.cpp update_backup");
    system("mv cd.cpp update_backup");
    system("mv ls.cpp update_backup");
    system("mv mkdir.cpp update_backup");
    system("mv rm.cpp update_backup");
    system("mv rmdir.cpp update_backup");
    system("mv touch.cpp update_backup");
    system("rm -rf a.out");
    system("wget --mirror cterm-updates.adriansmp.ga");
    system("mv cterm-updates.adriansmp.ga/* .");
    system("mv cterm-updates.adriansmp.ga");
    system("rm -rf index.html");
    system("rm -rf packages/index.html");
    system("rm -rf virtual_filesystem/index.html");
    system("rm -rf cterm-updates.adriansmp.ga");
    std::cout << "To finish the update process, delete the \"a.out\" file and run \"setup.sh\" again." << std::endl;
    return;
}
