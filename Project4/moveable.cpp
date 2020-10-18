#include"moveable.h"
Moveable::Moveable()
{
	cout << "Moveable()" << endl;
}

Moveable::~Moveable()
{
	cout << "~Moveable()" << endl;
}

Moveable::Moveable(const Moveable& move)
{
	cout << "Moveable(const Moveable& move)" << endl;
}
