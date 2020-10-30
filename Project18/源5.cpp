//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<functional>
//using namespace std;
//
//void test1()
//{
//	vector<bool> v1;
//	v1.push_back(true);
//	v1.push_back(true);
//	v1.push_back(false);
//	v1.push_back(true);
//	v1.push_back(false);
//
//	for (vector<bool>::iterator it = v1.begin(); it != v1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	vector<bool> v2;
//	v2.resize(v1.size());
//	logical_not<bool> v3;
//	transform(v1.begin(), v1.end(), v2.begin(),v3);
//	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}