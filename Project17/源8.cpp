//#include<iostream>
//#include<map>
//using namespace std;
//
//void print(const map<int, int>& m)
//{
//	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << (*it).first << " " << it->second << endl;
//	}
//	cout << endl;
//}
//
//int main()
//{
//	map<int, int> m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(5, 30));
//	m.insert(pair<int, int>(3, 40));
//	m.insert(pair<int, int>(4, 50));
//	print(m);
//
//	map<int, int> m1(m);
//	print(m1);
//
//	map<int, int> m2;
//	m2 = m1;
//	print(m2);
//	return 0;
//}