//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//void test1()
//{
//	class Person
//	{
//	public:
//		bool operator()(int val)
//		{
//			return val > 5;
//		}
//	};
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(40);
//
//	vector<int>::iterator it = find_if(v1.begin(), v1.end(), Person());
//	if (it == v1.end())
//	{
//		cout << "找不到元素" << endl;
//	}
//	else
//	{
//		cout << "找到了：" << *it << endl;
//	}
//}
//
//void test2()
//{
//	class Person
//	{
//	public:
//		Person(string name, int age)
//		{
//			m_name = name;
//			m_age = age;
//		}
//		string m_name;
//		int m_age;
//	};
//
//	class greate
//	{
//	public:
//		bool operator()(Person& p)
//		{
//			return p.m_age > 20;
//		}
//	};
//
//	vector<Person> v2;
//	Person p1("zhangsan", 20);
//	Person p2("lihua", 30);
//	Person p3("tom", 50);
//	
//	v2.push_back(p1);
//	v2.push_back(p2);
//	v2.push_back(p3);
//
//	vector<Person>::iterator it = find_if(v2.begin(), v2.end(), greate());
//	if (it == v2.end())
//	{
//		cout << "没找到" << endl;
//	}
//	else
//	{
//		cout << "找到了：" << it->m_name << " " << it->m_age << endl;
//	}
//}
//int main()
//{
//	test1();
//	test2();
//	return 0;
//}
