#pragma once
class Time {
public:
	Time();
	Time(int hour, int min, int sec);
	void setHour(int hr);
	void setMinute(int min);
	void setSecond(int sec);
	int getHour();
	int getMinute();
	int getSecond();
	//bool operator!=(const Time t) const;
	//bool operator==(const Time t) const;
	//ostream& operator<< (const Time t) const;
	void toString();
private:
	int hour;
	int minute;
	int second;
};