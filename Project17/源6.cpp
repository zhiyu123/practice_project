//#include<iostream>
//using namespace std;
//#include<set>
//
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2) const
//	{
//		return v1 > v2;
//	}
//};
//
//int main()
//{
//	set<int, MyCompare> s1;
//	s1.insert(10);
//	s1.insert(31);
//	s1.insert(18);
//	s1.insert(48);
//	s1.insert(17);
//
//	for (set<int, MyCompare>::iterator it_ptr = s1.begin(); it_ptr != s1.end(); it_ptr++)
//	{
//		cout << *it_ptr << " ";
//	}
//	return 0;
//}