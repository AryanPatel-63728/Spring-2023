#include <iostream>
#include "Menu.h"

using namespace std;

Menu::Menu()
{
}

void Menu::add_option(string option)
{
    options.push_back(option);
}

void Menu::display() const
{
    for (int i = 0; i < options.size(); i++)
    {
        cout << i + 1 << ") " << options[i] << endl;
    }
}

int Menu::get_input() const
{
    int input;
    do
    {
        display();
        cin >> input;
    } while (input < 1 || input > options.size());
    return input;
}