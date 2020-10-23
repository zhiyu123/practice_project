//#include<iostream>
//#include<string>
//using namespace std;
//template<class T1, class T2 = string>
//class A
//{
//public:
//	A(T1 age, T2 name);
//	void show();
//	T1 m_age;
//	T2 m_name;
//};
//
//template<class T1, class T2>
//A<T1, T2>::A(T1 age, T2 name)
//{
//	m_age = age;
//	m_name = name;
//}
//
//template<class T1, class T2>
//void A<T1, T2>::show()
//{
//	cout << m_age << " " << m_name << endl;
//}
//
//void func_show(A<int, string>& p)
//{
//	p.show();
//}
//
//int main()
//{
//	A<int, string>a(20, "Tom");
//	A<int>b(40, "Jerry");
//	func_show(a);
//	func_show(b);
//
//}