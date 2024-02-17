#pragma once
#include <string>
#include "time.h"

using namespace std;


class DateTime : public Time {
public:
	DateTime() {};
	DateTime(string dt);
	DateTime(int mon, int day, int yr);
	DateTime(int mon, int day, int yr, int hr, int min, int second);

	string toString();

	void setDataTime(string dt);

	friend ostream& operator<<(ostream& os, DateTime& dt);

private:
	int month;
	int day;
	int year;
};
