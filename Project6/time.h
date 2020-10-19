#ifndef __time_h__
#define __time_h__
#include<iostream>
using namespace std;
class Watch;
class Time
{
	friend Watch;
public:
	Time(int hour, int minute, int second);
	~Time();
private:
	int m_hour;
	int m_minute;
	int m_second;
};

#endif//__time_h__