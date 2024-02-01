#pragma once
#include "time.h"
#include <string>

using namespace std;

class Date_Time : public Time {
public:
	Date_Time(string dt);
	Date_Time(int mon, int day, int yr);
	void toString();
	Date_Time(int mon, int day, int yr, int hr, int min, int sec);
private:
	int month;
	int day;
	int year;
};