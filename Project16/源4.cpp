//#include<iostream>
//#include<list>
//#include<string>
//using namespace std;
//
//void print(const list<int>& L)
//{
//	for (list<int>::const_iterator it_ptr = L.begin(); it_ptr != L.end(); it_ptr++)
//	{
//		cout << *it_ptr << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	list<int> L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	print(L1);
//
//	if(!L1.empty())
//	{
//		cout << "L1不为空！" << endl;
//	}
//	else
//	{
//		cout << "L1为空！" << endl;
//	}
//	cout << "L1的大小为：" << L1.size() << endl;
//
//	L1.resize(20);
//	cout << "L1的大小为：" << L1.size() << endl;
//	print(L1);
//
//	L1.resize(30, 1);
//	cout << "L1的大小为：" << L1.size() << endl;
//	print(L1);
//
//	L1.resize(5);
//	cout << "L1的大小为：" << L1.size() << endl;
//	print(L1);
//
//	return 0;
//}