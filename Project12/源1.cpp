//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	string m_name;
//	int m_age;
//};
//
//void test1()
//{
//	vector<Person*> v;
//	Person p1("tom", 10);
//	Person p2("jerry", 20);
//	Person p3("marry", 30);
//	Person p4("mali", 40);
//	Person p5("lihua", 50);
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3); 
//	v.push_back(&p4);
//	v.push_back(&p5);
//	for (vector<Person*>::iterator it_begin = v.begin(); it_begin != v.end(); it_begin++)
//	{
//		cout << (*it_begin)->m_name << " " << (*it_begin)->m_age << endl;
//		cout << (**it_begin).m_name << " " << (**it_begin).m_age << endl;		//两种输出方式均可
//	}
//}
//
//int main()
//{
//	test1();
//	return 0;
//}