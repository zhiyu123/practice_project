#include"dog.h"

int main()
{
	Animal* p = new Dog;
	p->eat();
	p->move();
	delete p;
	p = NULL;
	return 0;
}