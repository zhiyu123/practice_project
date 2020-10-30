//#include<iostream>
//#include<string>
//using namespace std;
//void test1()
//{
//	class MyAdd
//	{
//	public:
//		int operator()(int v1, int v2)
//		{
//			return v1 + v2;
//		}
//		int count;
//	};
//	//函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
//	MyAdd my;
//	cout << my(2, 4) << endl;
//}
//
//void test2()
//{
//	class MyPrint
//	{
//	public:
//		MyPrint()
//		{
//			this->count = 0;
//		}
//		void operator()(string test)
//		{
//			cout << test << endl;
//			this->count++;
//		}
//		int count;
//	};
//
//	//函数对象超出普通函数的概念，函数对象可以有自己的状态
//	MyPrint my;
//	my("hello world");
//	my("hello world");
//	my("hello world");
//	my("hello world");
//	cout << "MyPrint的调用次数为：" << my.count << endl;
//
//}
//
//class MyPrint
//{
//public:
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//};
//
//void doprint(MyPrint& mp, string test)
//{
//	mp(test);
//}
//
//void test3()
//{
//	//函数对象可以作为参数传递
//	MyPrint my;
//	doprint(my, "hello c++");
//}
//int main()
//{
//	test1();
//	test2();
//	test3();
//	return 0;
//}