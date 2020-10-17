#include"worker.h"
Worker::Worker(string name):m_name(name)
{
	cout << "Worker(string name)" << endl;
}
Worker::~Worker()
{
	cout << "~Worker()" << endl;
}
Worker::Worker(const Worker& wor)
{
	m_name = wor.m_name;
}
void Worker::set_name(string name)
{
	m_name = name;
}
string Worker::get_name(void)
{
	return m_name;
}