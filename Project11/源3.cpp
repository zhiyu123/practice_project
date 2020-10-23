//#include<iostream>
//#include<string>
//using namespace std;
//
//template<class T1, class T2>
//class A;
//
//template<class T1, class T2>
//void show1(A<T1, T2>& p)
//{
//	cout << p.m_name << " " << p.m_age << endl;
//}
//
//template<class T1, class T2>
//class A
//{
//	template<class T1, class T2>             //类内实现.这句话上面有，也可以不写
//	friend void show(A<T1, T2> &p)
//	{
//		cout << p.m_name << " " << p.m_age << endl;
//	} 
//	friend void show1<>(A<T1, T2> &p);        //声明友元，类外实现
//public:
//	A(T1 name, T2 age);
//private:
//	T1 m_name;
//	T2 m_age;
//};
//
//template<class T1, class T2>
//A<T1, T2>::A(T1 name, T2 age)
//{
//	m_name = name;
//	m_age = age;
//}
//
//int main()
//{
//	A<string, int>a("marry", 20);
//	A<string, int>b("tom", 40);
//	show(a);
//	show1(b);
//	return 0;
//}