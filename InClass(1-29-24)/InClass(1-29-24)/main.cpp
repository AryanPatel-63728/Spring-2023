// InClass(1-29-24).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "date_time.h"

using namespace std;

int main()
{
    Date_Time dt(1, 29, 2024, 7, 20, 0);
    Date_Time dt2("01/20/2024 HH:MM:SEC");

    dt.toString();
    
    return 0;
}
