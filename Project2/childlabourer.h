#ifndef __childlabourer_h__
#define __childlabourer_h__
#include<iostream>
#include<string>
#include"children.h"
#include"worker.h"
using namespace std;
class Childlabourer:public Worker, public Children
{
public:
	Childlabourer(string name = "marry", int age = 40);
	~Childlabourer();
	Childlabourer(const Childlabourer& chi);
	void get_name_age(void);
};




#endif //__childlabourer_h__