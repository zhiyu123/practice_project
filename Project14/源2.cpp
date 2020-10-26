//#include<iostream>
//#include<deque>
//using namespace std;
//
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
//	deque<int> d;
//	for (int i = 0; i < 10; i++)
//	{
//		d.push_back(i);
//	}
//	print(d);
//
//	if (d.empty())
//	{
//		cout << "ÈÝÆ÷Îª¿Õ£¡" << endl;
//	}
//	else
//	{
//		cout << "ÈÝÆ÷²»Îª¿Õ" << endl;
//	}
//
//	cout << d.size() << endl;
//
//	d.resize(20);
//	print(d);
//
//	d.resize(30, 4);
//	print(d);
//
//	d.resize(4);
//	print(d);
//}
//int main()
//{
//	test();
//	return 0;
//}