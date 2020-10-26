//#include<iostream>
//#include<string>
//#include<deque>
//using namespace std;
//
//void print(const deque<int>& v)
//{
//	for (deque<int>::const_iterator it_ptr = v.begin(); it_ptr != v.end(); it_ptr++)
//	{
//		cout << *it_ptr << " ";
//	}
//	cout << endl;
//}
//
//void test(void)
//{
//	deque<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	print(v1);
//
//	deque<int> v2(v1.begin(), v1.end());
//	print(v2);
//
//	deque<int> v3(10, 20);
//	print(v3);
//
//	deque<int> v4(v3);
//	print(v4);
//}
//int main()
//{
//	test();
//	return 0;
//}