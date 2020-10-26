#include"person.h"

Person::Person(string name, double score)
{
	m_name = name;
	m_score = score;
}

Person::~Person()
{
	//
}

Person::Person(const Person& p)
{
	m_name = p.m_name;
	m_score = p.m_score;
}

