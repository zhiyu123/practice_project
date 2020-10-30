//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//void test1()
//{
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(40);
//
//	vector<int>::iterator it = find(v1.begin(), v1.end(), 20);
//	if (it == v1.end())
//	{
//		cout << "找不到元素" << endl;
//	}
//	else
//	{
//		cout << "找到了：" << *it << endl;
//	}
//}
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
//
//		bool operator==(const Person& p)
//		{
//			if (this->m_age == p.m_age && this->m_name == p.m_name)
//			{
//				return true;
//			}
//			else
//			{
//				return false;
//			}
//		}
//		string m_name;
//		int m_age;
//	};
//	vector<Person> v2;
//	Person p1("zhangsan", 20);
//	Person p2("lihua", 30);
//	Person p3("tom", 50);
//	
//	v2.push_back(p1);
//	v2.push_back(p2);
//	v2.push_back(p3);
//
//	vector<Person>::iterator it = find(v2.begin(), v2.end(), p2);
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
