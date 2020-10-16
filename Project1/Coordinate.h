#ifndef __Coordinate_h__
#define __Coordinate_h__
#include<iostream>
#include<string>
using namespace std;
class Coordinate
{
public:
	Coordinate(int x, int y);
	~Coordinate();
	void set_m_x(int _m_x);
	void set_m_y(int _m_y);
	int get_m_x(void);
	int get_m_y(void);
	int m_x;
	int m_y;
};





#endif //__Coordinate_h__