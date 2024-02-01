#include <iostream>
#include "Menu.h"

using namespace std;

int main()
{
    Menu main_menu;

    main_menu.add_option("Open new account");
    main_menu.add_option("Log into existing account");
    main_menu.add_option("Help");
    main_menu.add_option("Quit");
    int input = main_menu.get_input();
    cout << "Input: " << input << endl;
    return 0;
}

