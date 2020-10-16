#include"Line.h"
Line::Line(int x1, int y1, int x2, int y2):m_coor1(x1, y1),m_coor2(x2, y2)
{
	cout << "Line()" << endl;
}

Line::~Line()
{
	cout << "~Line()" << endl;
}
void Line::set_A(int x, int y)
{
	m_coor1.set_m_x(x);
	m_coor1.set_m_y(y);
}
void Line::set_B(int x, int y)
{
	m_coor2.set_m_x(x);
	m_coor2.set_m_y(y);
}
void Line::print_info()
{
	cout << "(" << m_coor1.get_m_x() << "," << m_coor1.get_m_y() << ")" << endl;
	cout << "(" << m_coor2.get_m_x() << "," << m_coor2.get_m_y() << ")" << endl;
}