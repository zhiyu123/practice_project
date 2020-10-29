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
//	cout << "map大小为：" << m.size() << endl;
//
//	if (m.empty())
//	{
//		cout << "为空！" << endl;
//	}
//	else
//	{
//		cout << "不为空！" << endl;
//	}
//
//	map<int, int> m1;
//	m1.insert(pair<int, int>(1, 40));
//	m1.insert(pair<int, int>(2, 20));
//	m1.insert(pair<int, int>(5, 34));
//	m1.insert(pair<int, int>(3, 46));
//	m1.insert(pair<int, int>(4, 24));
//	print(m);
//	print(m1);
//	m.swap(m1);
//	print(m);
//	print(m1);
//	
//	return 0;
//}