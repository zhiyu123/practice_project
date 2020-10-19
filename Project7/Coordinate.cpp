#include"Coordinate.h"
#include<ostream>
Coordinate::Coordinate(int x, int y)
{
	m_x = x;
	m_y = y;
}

int Coordinate::get_x()
{
	return m_x;
}

int Coordinate::get_y()
{
	return m_y;
}

//Coordinate& Coordinate::operator-()
//{
//	this->m_x = -(this->m_x);
//	this->m_y = -(this->m_y);
//	return *this;
//}

//Coordinate& operator-(Coordinate& coor)
//{
//	coor.m_x = -coor.m_x;
//	coor.m_y = -coor.m_y;
//	return coor;
//}

//Coordinate& Coordinate::operator++()
//{
//	this->m_x++;
//	this->m_y++;
//	return *this;
//}

//Coordinate& operator++(Coordinate& coor)
//{
//	coor.m_x++;
//	coor.m_y++;
//	return coor;
//}

//Coordinate Coordinate::operator++(int)
//{
//	Coordinate temp(*this);
//	this->m_x++;
//	this->m_y++;
//	return temp;
//}

//Coordinate Coordinate::operator+(Coordinate& coor)
//{
//	Coordinate coor1(0, 0);
//	coor1.m_x = this->m_x + coor.m_x;
//	coor1.m_y = this->m_y + coor.m_y;
//	return coor1;
//}

//Coordinate operator+(Coordinate& coor1, Coordinate& coor2)
//{
//	Coordinate coor3(0, 0);
//	coor3.m_x = coor1.m_x + coor2.m_x;
//	coor3.m_y = coor1.m_y + coor2.m_y;
//	return coor3;
//}

//ostream& operator<<(ostream& output, Coordinate& coor)
//{
//	output << coor.m_x << "," << coor.m_y << endl;
//	return output;
//}