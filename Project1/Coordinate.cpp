#include"Coordinate.h"
Coordinate::Coordinate(int x, int y):m_x(x), m_y(y)
{
	cout << "Coordinate()" << endl;
}
Coordinate::~Coordinate()
{
	cout << "~Coordinate()" << endl;
}
void Coordinate:: set_m_x(int _m_x)
{
	m_x = _m_x;
}
void Coordinate::set_m_y(int _m_y)
{
	m_y = _m_y;
}
int Coordinate::get_m_x(void)
{
	return m_x;
}
int Coordinate::get_m_y(void)
{
	return m_y;
}