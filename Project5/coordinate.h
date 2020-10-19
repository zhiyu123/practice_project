#ifndef __coordinate_h__
#define __coordinate_h__

#include<iostream>
#include<string>
using namespace std;
class Coordinate
{
	friend void display(Coordinate &coor);
public:
	Coordinate(int x, int y);
	~Coordinate();
private:
	int m_x;
	int m_y;
};



#endif//__coordinate_h__