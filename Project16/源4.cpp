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
//		cout << "L1��Ϊ�գ�" << endl;
//	}
//	else
//	{
//		cout << "L1Ϊ�գ�" << endl;
//	}
//	cout << "L1�Ĵ�СΪ��" << L1.size() << endl;
//
//	L1.resize(20);
//	cout << "L1�Ĵ�СΪ��" << L1.size() << endl;
//	print(L1);
//
//	L1.resize(30, 1);
//	cout << "L1�Ĵ�СΪ��" << L1.size() << endl;
//	print(L1);
//
//	L1.resize(5);
//	cout << "L1�Ĵ�СΪ��" << L1.size() << endl;
//	print(L1);
//
//	return 0;
//}