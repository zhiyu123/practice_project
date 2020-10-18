#include"tank.h"
Tank::Tank()
{
	cout << "Tank()" << endl;
}
Tank::~Tank()
{
	cout << "~Tank()" << endl;
}
Tank::Tank(const Tank& tank)
{
	cout << "Tank(const Tank& tank)" << endl;
}
void Tank::shot()
{
	cout << "shot()" << endl;
}
void Tank::move()
{
	cout << "Tank----move()" << endl;
}