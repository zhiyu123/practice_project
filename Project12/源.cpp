//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//void test()
//{
//	//创建一个vector容器
//	vector<int> v;
//	//向容器中插入数据
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	//通过迭代器访问容器中的数据
//	vector<int>::iterator it_begin = v.begin();  //起始迭代器，指向容器中的第一个元素
//	vector<int>::iterator it_end = v.end();      //结束迭代器，指向容器中最后一个元素的下一个位置
//
//	//第一种遍历方式
//	while (it_begin != it_end)
//	{
//		cout << *it_begin << endl;
//		it_begin++;
//	}
//}
//
//void test1()
//{
//	//创建一个vector容器
//	vector<int> v;
//	//向容器中插入数据
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	//第二种遍历方式
//	for (vector<int>::iterator it_begin = v.begin(); it_begin != v.end(); it_begin++)
//	{
//		cout << *it_begin << endl;
//	}
//}
//
//void print(int val)
//{
//	cout << val << endl;
//}
//
//void test2()
//{
//	//创建一个vector容器
//	vector<int> v;
//	//向容器中插入数据
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	//第三种遍历方式
//	for_each(v.begin(), v.end(), print);   //fou_each()是stl的一个算法函数，其通过回调函数来打印
//}										  //函数名就是函数地址，也就是指针，回调函数就是函数指针作为另一个函数的参数
//
//int main()
//{
//	test();
//	test1();
//	test2();
//	return 0;
//}