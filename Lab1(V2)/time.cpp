#include <iostream>
#include "time.h"

using namespace std;

void Time::toString() 
{
	cout << hour << ":" << minute << ":" << second << endl; // AM/PM or 24H
}

Time::Time()
{

}

Time::Time(int hour, int min, int sec) 
{
	this->hour = hour;
	minute = min;
	second = sec;
};

void Time:: setSecond(int sec)
{
	second = sec;
}


int Time::getHour()
{
	return hour;
};

int Time::getMinute()
{
	return minute;
}

int Time::getSecond()
{
	return second;
}

void Time::setMinute(int min) 
{
	minute = min;
};

void Time::setHour(int hr)
{
	hour = hr;
};


//bool Time::operator==(const Time t) const
//{
//	return *this - t == 0;
//}
//
//// compares two points in time and shows if they are not the same
//bool Time::operator!=(const Time t) const
//{
//	return *this - t != 0;
//}