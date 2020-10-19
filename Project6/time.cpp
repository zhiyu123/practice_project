#include"time.h"
Time::Time(int hour, int minute, int second):m_hour(hour), m_minute(minute), m_second(second)
{
	cout << "Time()" << endl;
}

Time::~Time()
{
	cout << "Time()" << endl;
}

