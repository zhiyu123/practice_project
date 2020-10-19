#ifndef __watch_h__
#define __watch_h__

#include<iostream>
#include<string>
#include"time.h"
using namespace std;
class Watch
{
public:
	Watch(int hour, int minute, int second);
	~Watch();
	void display(void);
private:
	Time m_time;
};


#endif//__watch_h__