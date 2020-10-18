#ifndef __dog_h__
#define __dog_h__
#include<iostream>
#include"animal.h"
using namespace std;
class Dog:public Animal
{
public:
	Dog();
	virtual ~Dog();
	virtual void eat(void);
	virtual void move(void);
};



#endif//__dog_h__