#include"children.h"
Children::Children(int age):m_age(age)
{
	cout << "Children()" << endl;
}
Children::~Children()
{
	cout << "~Children()" << endl;
}
Children::Children(const Children& chi)
{
	m_age = chi.m_age;
}
void Children::set_age(int age)
{
	m_age = age;
}
int Children::get_age(void)
{
	return m_age;
}