//#include<iostream>
//#include<string>
//using namespace std;
//template<class T1, class T2>
//class person
//{
//public:
//	person(T1 name, T2 age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	void showperson()
//	{
//		cout << m_name << " " << m_age << endl;
//	}
//	T1 m_name;
//	T2 m_age;
//};
//
////1��ָ����������
//void printperson1(person<string, int>& p)
//{
//	p.showperson();
//}
//
////2������ģ�廯
//template<class T1, class T2>
//void printperson2(person<T1, T2>& p)
//{
//	p.showperson();
//}
//
////3��������ģ�廯
//template<class T>
//void printperson3(T &p)
//{
//	p.showperson();
//}
//
//void test1()
//{
//	person<string, int>p("�����", 20);
//	printperson1(p);
//}
//void test2()
//{
//	person<string, int>p("��˽�", 30);
//	printperson2(p);
//}
//void test3()
//{
//	person<string, int>p("��ɮ", 40);
//	printperson3(p);
//}
//int main()
//{
//	test1();
//	test2();
//	test3();
//	return 0;
//}