#pragma once
//base class
class Time
{
public:
	Time() {}
	Time(int hour, int min, int sec)
	{
		this->hour = hour;
		minute = min;
		secound = sec;
	};
	void setHour(int hr)
	{
		hour = hr;
	};
	void setMinute(int min)
	{
		minute = min;
	};
	void setSecound(int sec)
	{
		secound = sec;
	};

	int getHour()
	{
		return hour;
	};

	int getMinute()
	{
		return minute;
	};
	int getSecound()
	{
		return secound;
	};
//protected:
private:
	int hour;
	int minute;
	int secound;
};