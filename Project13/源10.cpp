//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//void print(vector<int>& v)
//{
//	for (vector<int>::iterator it_ptr = v.begin(); it_ptr != v.end(); it_ptr++)
//	{
//		cout << *it_ptr << " ";
//	}
//	cout << endl;
//}
//
//void test(void)
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	vector<int> v2;
//	for (int i = 10; i > 0; i--)
//	{
//		v2.push_back(i);
//	}
//	
//	print(v1);
//	print(v2);
//	v1.swap(v2);
//	print(v1);
//	print(v2);
//}
//
//void test1()                 //利用swap来巧妙的收缩内存
//{
//	vector<int> v1;
//	for (int i = 0; i < 10000; i++)
//	{
//		v1.push_back(i);
//	}
//	
//	cout << v1.size() << endl;
//	cout << v1.capacity() << endl;
//
//	v1.resize(3);
//	cout << v1.size() << endl;
//	cout << v1.capacity() << endl;
//
//	//创建了一个匿名对象，让它指向了原先的v1的大容量，
//	//然后让v1指向这个匿名对象的小容量，匿名对象用完后就会被系统自动回收释放，
//	//以达到回收内存的效果
//	vector<int>(v1).swap(v1);		//匿名对象和v1交换
//	cout << v1.size() << endl;
//	cout << v1.capacity() << endl;
//}
//
//int main()
//{
//	//test();
//	test1();
//	return 0;
//}