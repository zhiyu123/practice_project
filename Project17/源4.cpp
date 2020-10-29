//#include<iostream>
//#include<set>
//using namespace std;
//
//int main()
//{
//	set<int> s1;
//	pair<set<int>::iterator, bool> ret = s1.insert(10); //pair是对组，有两个参数，如果插入成功，则bool为真，否则，为假
//	if (ret.second)				//ret的第二个参数，即bool为真，就表示插入成功
//	{
//		cout << "第一次插入成功" << endl;
//	}
//	else
//	{
//		cout << "第一次插入失败" << endl;
//	}
//
//	ret = s1.insert(10);
//	if (ret.second)
//	{
//		cout << "第二次插入成功" << endl;
//	}
//	else
//	{
//		cout << "第二次插入失败" << endl;
//	}
//
//	return 0;
//}