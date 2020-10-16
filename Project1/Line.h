#include"Coordinate.h"
class Line
{
public:
	Line(int x1, int y1, int x2, int y2);
	~Line();
	void set_A(int x, int y);
	void set_B(int x, int y);
	void print_info();
	Coordinate m_coor1;
	Coordinate m_coor2;
};