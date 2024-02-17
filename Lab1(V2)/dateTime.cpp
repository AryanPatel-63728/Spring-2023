#include <iostream>
#include <string>
#include "dateTime.h"
#include "time.h"

using namespace std;

DateTime::DateTime(int mon, int day, int yr, int hr, int min, int second) 
	: Time(hr, min, second) {
	month = mon;
	this->day = day;
	year = yr;
}

DateTime::DateTime(string dt) {
	// TODO
}


DateTime::DateTime(int mon, int day, int yr)
	: Time(0, 0, 0) {

}

string DateTime::toString()
{
	return to_string(month) + "/" + to_string(day) + "/" + to_string(year) + " " +
		to_string(getHour()) + ":" + to_string(getMinute()) + ":" + to_string(getSecond());
}

void DateTime::setDataTime(string dt)
{
	int index = dt.find(' ');

	// 1/29/2024 18:30:11
	string d = dt.substr(0, index);
	string t = dt.substr(++index);

	//setTime(t);
	//setDate(d);
}

ostream& operator<<(ostream& os, DateTime& dt)
{
	os << dt.toString();
	return os;
}