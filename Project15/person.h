#ifndef __person_h__
#define __ person_h__
#include<iostream>
#include<deque>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

class Person
{
	friend void print(vector<Person> &v);
	friend void calculate_score();
public:
	Person(string name, double score = 0);
	~Person();
	Person(const Person& p);
private:
	string m_name;
	double m_score;
};


#endif//__person_h__