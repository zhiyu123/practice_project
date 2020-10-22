#include<iostream>
#include<string>
using namespace std;

class Drink
{
public:
	virtual void boil() = 0;
	virtual void brew() = 0;
	virtual void incup() = 0;
	virtual void insomething() = 0;
	void drink()
	{
		boil();
		brew();
		incup();
		insomething();
	}
};

class Tea:public Drink
{
	virtual void boil()
	{
		cout << "ÉÕÅ©·òÉ½Èª" << endl;
	}
	virtual void brew()
	{
		cout << "³å²èÒ¶" << endl;
	}
	virtual void incup()
	{
		cout << "µ¹Ë®" << endl;
	}
	virtual void insomething()
	{
		cout << "¼ÓÌÇ" << endl;
	}
};

class coffer:public Drink
{
	virtual void boil()
	{
		cout << "ÉÕ±ùÂ¶" << endl;
	}
	virtual void brew()
	{
		cout << "³å¿§·È" << endl;
	}
	virtual void incup()
	{
		cout << "µ¹Ë®" << endl;
	}
	virtual void insomething()
	{
		cout << "¼ÓÅ£ÄÌ" << endl;
	}
};

int main()
{
	Drink* ptr = new Tea;
	ptr->drink();
	cout << "-----------------" << endl;
	delete ptr;
	ptr = new coffer;
	ptr->drink();
	delete ptr;
	ptr = NULL;
	return 0;
}

