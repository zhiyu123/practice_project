#ifndef __tank_h__
#define __tank_h__

#include"moveable.h"
class Tank:public Moveable
{
public:
	Tank();
	~Tank();
	Tank(const Tank& tank);
	void shot();
	virtual void move();
};




#endif//__tank_h__