//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Transform
//{
//public:
//	int operator()(int val)
//	{
//		return val;
//	}
//};
//
//class Print
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//void test()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	vector<int> v2;
//	
//	v2.resize(v1.size());
//	transform(v1.begin(), v1.end(), v2.begin(), Transform());
//
//	for_each(v2.begin(), v2.end(), Print());
//}
//int main()
//{
//	test();
//	return 0;
//}