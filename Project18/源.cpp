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
//	//����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
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
//	//�������󳬳���ͨ�����ĸ����������������Լ���״̬
//	MyPrint my;
//	my("hello world");
//	my("hello world");
//	my("hello world");
//	my("hello world");
//	cout << "MyPrint�ĵ��ô���Ϊ��" << my.count << endl;
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
//	//�������������Ϊ��������
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