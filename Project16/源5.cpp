//#include<iostream>
//#include<list>
//using namespace std;
//
////push_back(elem); //在容器尾部加入一个元素
////pop_back();//删除容器中最后一个元素
////push_front(elem);  //在容器开头插入一个元素
////pop_front();  //从容器开头移除第一个元素
////insert(pos, elem);  //在pos位置插elem元素的拷贝，返回新数据的位置。
////insert(pos, n, elem);  //在pos位置插入n个elem数据，无返回值。
////insert(pos, beg, end)  //在pos位置插入[beg,end)区间的数据，无返回值。
////clear();//移除容器的所有数据
////erase(beg, end);//删除[beg,end)区间的数据，返回下一个数据的位置。
////erase(pos);//删除pos位置的数据，返回下一个数据的位置。
////remgve(elem);//删除容器中所有与elem值匹配的元素.
//
//void print(const list<int>& L)
//{
//	for (list<int>::const_iterator it_ptr = L.begin(); it_ptr != L.end(); it_ptr++)
//	{
//		cout << *it_ptr << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	list<int> L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_front(30);
//	L1.push_front(40);
//	print(L1);
//	
//	L1.insert(L1.begin(), 20);
//	print(L1);
//
//	list<int>::iterator it_ptr = L1.begin();
//	++(++it_ptr);
//	L1.insert(it_ptr, 4, 20);
//	print(L1);
//
//	list<int> L2;
//	L2.insert(L2.begin(), L1.begin(), L1.end());
//	print(L2);
//
//	L2.erase(L2.begin(), L2.end());
//	print(L2);
//
//	L2.push_back(10);
//	L2.push_front(20);
//	L2.push_back(40);
//	L2.push_back(20);
//	L2.remove(20);
//	print(L2);
//	return 0;
//}