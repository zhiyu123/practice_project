#include"watch.h"
Watch::Watch(int hour, int minute, int second):m_time(hour, minute, second)
{
	cout << "Watch()" << endl;
}

Watch::~Watch()
{
	cout << "~Watch()" << endl;
}

void Watch::display(void)
{
	cout << m_time.m_hour << ":" << m_time.m_minute << ":" << m_time.m_second << endl;
}