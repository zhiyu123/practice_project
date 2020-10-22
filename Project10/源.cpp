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
		cout << "��ũ��ɽȪ" << endl;
	}
	virtual void brew()
	{
		cout << "���Ҷ" << endl;
	}
	virtual void incup()
	{
		cout << "��ˮ" << endl;
	}
	virtual void insomething()
	{
		cout << "����" << endl;
	}
};

class coffer:public Drink
{
	virtual void boil()
	{
		cout << "�ձ�¶" << endl;
	}
	virtual void brew()
	{
		cout << "�忧��" << endl;
	}
	virtual void incup()
	{
		cout << "��ˮ" << endl;
	}
	virtual void insomething()
	{
		cout << "��ţ��" << endl;
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

