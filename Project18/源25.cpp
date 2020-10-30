//#include<iostream>
//#include<vector>`
//#include<algorithm>
//#include<functional>
//using namespace std;
//
//void print(int val)
//{
//	cout << val << " ";
//}
//void test01()
//{
//	vector<int> v1;
//	vector<int> v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//
//	vector<int> v3;
//	v3.resize(v1.size() + v2.size()); // 两个容器没有交集，v3的大小为v1 v2之和
//	set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//	vector<int>::iterator it = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//	for_each(v3.begin(), it, print);
//	cout << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}