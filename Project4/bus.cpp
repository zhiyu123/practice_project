#include"bus.h"
Bus::Bus()
{
	cout << "Bus()" << endl;
}
Bus::~Bus()
{
	cout << "~Bus()" << endl;
}
Bus::Bus(const Bus& bus)
{
	cout << "Bus(const Bus& bus)" << endl;
}
void Bus::carry()
{
	cout << "carry()" << endl;
}
void Bus::move()
{
	cout << "Bus-----move()" << endl;
}