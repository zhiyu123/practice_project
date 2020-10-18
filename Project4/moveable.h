#ifndef __moveable_h__
#define __moveable_h__

#include<iostream>
#include<string>
using namespace std;
class Moveable
{
public:
	Moveable();
	~Moveable();
	Moveable(const Moveable& move);
	virtual void move() = 0;
};

#endif//__moveable_h__