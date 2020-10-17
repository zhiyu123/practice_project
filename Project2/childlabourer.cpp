#include"childlabourer.h"

Childlabourer::Childlabourer(string name, int age):Worker(name), Children(age)
{
	cout << "Childabourer(string name, int age)" << endl;
}

Childlabourer::~Childlabourer()
{
	cout << "~Childlabourer()" << endl;
}
Childlabourer::Childlabourer(const Childlabourer& chi)
{
	m_age = chi.m_age;
	m_name = chi.m_name;
	cout << "Childlabourer(const Childlabourer)" << endl;
}
void Childlabourer::get_name_age(void)
{
	cout << m_age << "   " << m_name << endl;
}