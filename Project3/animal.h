#ifndef __animal_h__
#define __animal_h__
#include<iostream>
#include<string>
using namespace std;
class Animal
{
public:
	Animal();
	virtual ~Animal();
	virtual void eat();
	virtual void move();
};


#endif//__animal_h__