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
//void test1()                 //����swap������������ڴ�
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
//	//������һ��������������ָ����ԭ�ȵ�v1�Ĵ�������
//	//Ȼ����v1ָ��������������С�������������������ͻᱻϵͳ�Զ������ͷţ�
//	//�Դﵽ�����ڴ��Ч��
//	vector<int>(v1).swap(v1);		//���������v1����
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