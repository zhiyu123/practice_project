//#include<iostream>
//#include<list>
//using namespace std;
//
////push_back(elem); //������β������һ��Ԫ��
////pop_back();//ɾ�����������һ��Ԫ��
////push_front(elem);  //��������ͷ����һ��Ԫ��
////pop_front();  //��������ͷ�Ƴ���һ��Ԫ��
////insert(pos, elem);  //��posλ�ò�elemԪ�صĿ��������������ݵ�λ�á�
////insert(pos, n, elem);  //��posλ�ò���n��elem���ݣ��޷���ֵ��
////insert(pos, beg, end)  //��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
////clear();//�Ƴ���������������
////erase(beg, end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
////erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
////remgve(elem);//ɾ��������������elemֵƥ���Ԫ��.
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