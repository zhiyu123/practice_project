//#include<iostream>
//#include<string>
//#include<deque>
//using namespace std;
//void print(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it_ptr = d.begin(); it_ptr != d.end(); it_ptr++)
//	{
//		cout << *it_ptr << " ";
//	}
//	cout << endl;
//}
//
//void test(void)
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	print(d1);
//	
//	deque<int> d2;
//	d2 = d1;
//	print(d2);
//
//	deque<int> d3;
//	d3.assign(d2.begin(), d2.end());
//	print(d3);
//
//	deque<int> d4;
//	d4.assign(4, 20);
//	print(d4);
//}
//
//int main()
//{
//	test();
//	return 0;
//}