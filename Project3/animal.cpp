#include"animal.h"
Animal::Animal()
{
	cout << "Animal()" << endl;
}
Animal::~Animal()
{
	cout << "~Animal()" << endl;
}
void Animal::eat()
{
	cout << "Animal  eat()" << endl;
}
void Animal::move()
{
	cout << "Animal   move()" << endl;
}