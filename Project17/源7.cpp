//#include<iostream>
//#include<string>
//#include<set>
//using namespace std;
//
//class person
//{
//public:
//	person(string name, int age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//	string m_name;
//	int m_age;
//};
//
//class compare_person
//{
//public:
//	bool operator()(const person& p1, const person& p2) const
//	{
//		return p1.m_age > p2.m_age;
//	}
//};
//int main()
//{
//	set<person, compare_person> s1;
//	person p1("a", 20);
//	person p2("b", 30);
//	person p3("c", 40);
//	person p4("d", 50);
//	person p5("e", 23);
//	s1.insert(p1);
//	s1.insert(p2);
//	s1.insert(p3);
//	s1.insert(p4);
//	s1.insert(p5);
//	for (set<person,compare_person>::iterator it_ptr = s1.begin(); it_ptr != s1.end(); it_ptr++)
//	{
//		cout << "ĞÕÃû£º" << (*it_ptr).m_name << "Äê¼Í£º" << (*it_ptr).m_age << endl;
//	}
//	cout << endl;
//	return 0;
//}