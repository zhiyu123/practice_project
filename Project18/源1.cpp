//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//void test()
//{
//	class GreaterFive
//	{
//	public:
//		bool operator()(int num)
//		{
//			return num > 5;
//		}
//	};
//
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	vector<int>::iterator it = find_if(v1.begin(), v1.end(), GreaterFive());
//	if (it != v1.end())
//	{
//		cout << "找到了！" << *it << endl;
//	}
//	else
//	{
//		cout << "没找到！" << endl;
//	}
//}
//
//int main()
//{
//	test();
//	return 0;
//}