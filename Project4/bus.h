#ifndef __bus_h__
#define __bus_h__

#include"moveable.h"
class Bus:public Moveable
{
public:
	Bus();
	~Bus();
	Bus(const Bus& bus);
	void carry();
	virtual void move();
};





#endif//__bus_h__