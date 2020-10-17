#ifndef __worker_h__
#define __worker_h__

#include<iostream>
#include<string>
using namespace std;
class Worker
{
public:
	Worker(string name = "lacy");
	~Worker();
	Worker(const Worker& wor);
	void set_name(string name);
	string get_name(void);
protected:
	string m_name;
};



#endif //__worker_h__