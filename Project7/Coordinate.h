#ifndef __Coordinate_h__
#define __Coordinate_h__
#include<iostream>
#include<string>
using namespace std;
class Coordinate
{
	//friend Coordinate& operator-(Coordinate& coor);
	//friend Coordinate& operator++(Coordinate& coor);
	//friend Coordinate operator+(Coordinate& coor1, Coordinate& coor2);
	//friend ostream& operator<<(ostream& output, Coordinate& coor);
public:
	Coordinate(int x, int y);
	//Coordinate& operator-();
	//Coordinate& operator++();
	//Coordinate operator++(int);
	//Coordinate operator+(Coordinate& coor);

	int get_x();
	int get_y();
private:
	int m_x;
	int m_y;
};



#endif//__Coordiantae_h__