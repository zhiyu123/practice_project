#include"dog.h"
Dog::Dog()
{
	cout << "Dog()" << endl;
}
Dog::~Dog()
{
	cout << "~Dog()" << endl;
}
void Dog::eat(void)
{
	cout << "dog eat()" << endl;
}
void Dog::move(void)
{
	cout << "dog move()" << endl;
}