//#include<iostream>
//#include<set>
//using namespace std;
//
//void print(const set<int>& s)
//{
//	for (set<int>::const_iterator it_ptr = s.begin(); it_ptr != s.end(); it_ptr++)
//	{
//		cout << *it_ptr << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	set<int> s1;
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(15);
//	s1.insert(50);
//	if (!s1.empty())
//	{
//		cout << "s1不为空！" << endl;
//	}
//	else
//	{
//		cout << "s1为空！" << endl;
//	}
//
//	cout << "s1的大小为：" << s1.size() << endl;
//
//	set<int> s2;
//	s2.insert(39);
//	s2.insert(40);
//	s2.insert(50);
//	print(s1);
//	print(s2);
//	s1.swap(s2);
//	print(s1);
//	print(s2);
//	return 0;
//}