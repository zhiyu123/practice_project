//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//void print(vector<int> &v)
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
//	if (v1.empty())
//	{
//		cout << "v1����Ϊ�գ�" << endl;
//	}
//	else
//	{
//		cout << "v1��Ϊ�գ�" << endl;
//	}
//
//	cout << "v1������Ϊ��" << v1.capacity() << endl;
//	cout << "v1�Ĵ�СΪ��" << v1.size() << endl;
//
//	v1.resize(15);
//	cout << "v1������Ϊ��" << v1.capacity() << endl;
//	cout << "v1�Ĵ�СΪ��" << v1.size() << endl;
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1.at(i) << " ";
//	}
//	cout << endl;
//
//	v1.resize(20, 4);
//	cout << "v1������Ϊ��" << v1.capacity() << endl;
//	cout << "v1�Ĵ�СΪ��" << v1.size() << endl;
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//
//	v1.resize(10);
//	cout << "v1������Ϊ��" << v1.capacity() << endl;
//	cout << "v1�Ĵ�СΪ��" << v1.size() << endl;
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//
//
//}
//
//int main()
//{
//	test();
//	return 0;
//}