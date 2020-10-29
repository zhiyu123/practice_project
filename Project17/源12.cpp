//#include<iostream>
//#include<map>
//using namespace std;
//
//class mycompare
//{
//public:
//	bool operator()(int v1, int v2) const
//	{
//		return v1 > v2;
//	}
//};
//int main()
//{
//	map<int, int, mycompare> m;
//	m.insert(make_pair(1, 20));
//	m.insert(make_pair(3, 49));
//	m.insert(make_pair(5, 42));
//	m.insert(make_pair(2, 43));
//	m.insert(make_pair(5, 59));
//	for (map<int, int, mycompare>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << (*it).first << " " << it->second << endl;
//	}
//	return 0;
//}