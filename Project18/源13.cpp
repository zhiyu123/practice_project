//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//void test1()
//{
//	class greater
//	{
//	public:
//		bool operator()(int val)
//		{
//			return val > 20;
//		}
//	};
//	vector<int> v;
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(60);
//	int num = count_if(v.begin(), v.end(), greater());
//	cout << num << endl;
//}
//
//
//void test2()
//{
//	class person
//	{
//	public:
//		person(int age, string name)
//		{
//			m_age = age;
//			m_name = name;
//		}
//		int m_age;
//		string m_name;
//	};
//
//	class grative
//	{
//	public:
//		bool operator()(const person& p)
//		{
//			return p.m_age > 20;
//		}
//	};
//	person p1(30, "jim");
//	person p2(40, "tom");
//	person p3(70, "jerry");
//	person p4(58, "lihua");
//	vector<person> v2;	
//	v2.push_back(p1);
//	v2.push_back(p2);
//	v2.push_back(p3);
//	v2.push_back(p4);
//	
//	int num = count_if(v2.begin(), v2.end(), grative());
//	cout << num << endl;
//	
//}
//
//int main()
//{
//	test1();
//	test2();
//	return 0;
//
//}