#include"moveable.h"
#include"bus.h"
#include"tank.h"

void doSomething(Moveable* obj)
{
	obj->move();
	if (typeid(*obj) == typeid(Bus))
	{
		Bus* bus = dynamic_cast<Bus*>(obj);
		bus->carry();
	}
	if (typeid(*obj) == typeid(Tank))
	{
		Tank* tank = dynamic_cast<Tank*>(obj);
		tank->shot();
	}
	obj->move();
}
int main()
{
	Bus p;
	Tank q;
	doSomething(&p);
	cout << endl;
	doSomething(&q);
	return 0;
}