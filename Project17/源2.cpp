//
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
//
//int main()
//{
//	set<int> s1;
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(28);
//	print(s1);
//
//	s1.erase(s1.begin());
//	print(s1);
//
//	s1.erase(s1.begin(), s1.end());
//	print(s1);
//
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(28);
//	s1.erase(10);
//	print(s1);
//
//	s1.clear();
//	print(s1);
//	
//	return 0;
//}