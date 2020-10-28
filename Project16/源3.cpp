//#include<iostream>
//#include<list>
//using namespace std;
//
//void print(const list<int> L)
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
//	list<int> L2;
//	L2.assign(L1.begin(), L1.end());
//	print(L2);
//
//	list<int> L3;
//	L3.assign(10, 10);
//	print(L3);
//
//	list<int> L4;
//	L4 = L3;
//	print(L4);
//
//	L4.swap(L2);
//	print(L2);
//	print(L4);
//
//	return 0;
//}