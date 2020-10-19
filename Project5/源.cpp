#include"coordinate.h"

void display(Coordinate &coor)
{
	cout << coor.m_x << " " << coor.m_y << endl;
}

int main()
{
	Coordinate coor(3, 4);
	display(coor);
	return 0;
}