#include<iostream>
#include<string>
using namespace std;
class A
{

	friend void show(A &a)
	{
		cout << a.m_a << endl;
	}
public:
	A(int a) { m_a = a; }
private:
	int m_a;
};

int main()
{
	A a(10);
	show(a);
	return 0;
}