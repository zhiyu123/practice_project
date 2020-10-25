//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//void test()
//{
//	int num = 0;
//	int* p = NULL;
//	vector<int> v;
//	v.reserve(10000);    //预留10000的空间
//	for (int i = 0; i < 10000; i++) //统计开辟新空间的次数
//	{
//		v.push_back(i);
//		if (p != &v[0])      //vector不够时，会从新找一个更大的空间来存储，所以首地址会变化
//		{
//			p = &v[0];       //可以通过p每次指向的vector容器的首地址不一样来统计一共扩容多少次
//			num++;
//		}
//	}
//	cout << num << endl;      //num原先等于23，加了reserve后变成了1
//}
//
//int main()
//{
//	test();
//	return 0;
//}