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
//	m.insert(make_pair(1, 10));				//第一种
//	m.insert(pair<int, int>(2, 20));		//第二种
//	m.insert(map<int, int>::value_type(3, 30));	//第三种
//	m[4] = 40;						//第四种
//	print(m);
//
//	m.erase(m.begin());
//	print(m);
//
//	m.erase(3);
//	print(m);
//
//	m.erase(m.begin(), m.end());
//	print(m);
//	return 0;
//}