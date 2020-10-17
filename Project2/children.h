#ifndef __children_h__
#define __children_h__

#include<iostream>
#include<string>
using namespace std;
class Children
{
public:
	Children(int age = 20);
	~Children();
	Children(const Children& chi);
	void set_age(int name);
	int get_age(void);
protected:
	int m_age;
};


#endif //__children_h__