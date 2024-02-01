#include <string>
#include "date_time.h"
#include "time.h"
#include <iostream>

Date_Time::Date_Time(int hr, int min, int sec, int day, int yr, int mon)
	: Time (hour, min, sec)
{
	month = mon;
	this->day = day;
	year = yr;
	//setHour(hr);
	//setMinute(min);
	//setSecound(sec);
}

Date_Time::Date_Time(string dt)
{
	//TO-DO
}

Date_Time::Date_Time(int mon, int day, int yr)
	: Time(0, 0, 0)
{

}

void Date_Time::toString()
{
	cout << month << "/" << day << "/" << year << " " << getHour() << ":" << getMinute() << ":" << getSecound() << endl;
}