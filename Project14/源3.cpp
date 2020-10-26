//#include<iostream>
//#include<string>
//#include<deque>
//using namespace std;
//
//void print(deque<int>& d)
//{
//	for (deque<int>::iterator it_ptr = d.begin(); it_ptr != d.end(); it_ptr++)
//	{
//		cout << *it_ptr << " ";
//	}
//	cout << endl;
//}
//
//void test1()
//{
//	deque<int> d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(30);
//	d1.push_front(40);
//	print(d1);
//
//	d1.pop_front();
//	d1.pop_back();
//	print(d1);
//
//	d1.insert(d1.begin(), 20);
//	print(d1);
//
//	d1.insert(d1.end(), 3, 40);
//	print(d1);
//
//	deque<int> d2;
//	d2.insert(d2.begin(), d1.begin(), d1.end());
//	print(d2);
//
//	d2.clear();
//	print(d2);
//
//	d1.erase(d1.begin());
//	print(d1);
//
//	d1.erase(d1.begin(), d1.end());
//	print(d1);
//
//
//}
//
//int main()
//{
//	test1();
//	return 0;
//}