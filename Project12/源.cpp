//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//void test()
//{
//	//����һ��vector����
//	vector<int> v;
//	//�������в�������
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	//ͨ�����������������е�����
//	vector<int>::iterator it_begin = v.begin();  //��ʼ��������ָ�������еĵ�һ��Ԫ��
//	vector<int>::iterator it_end = v.end();      //������������ָ�����������һ��Ԫ�ص���һ��λ��
//
//	//��һ�ֱ�����ʽ
//	while (it_begin != it_end)
//	{
//		cout << *it_begin << endl;
//		it_begin++;
//	}
//}
//
//void test1()
//{
//	//����һ��vector����
//	vector<int> v;
//	//�������в�������
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	//�ڶ��ֱ�����ʽ
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
//	//����һ��vector����
//	vector<int> v;
//	//�������в�������
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	//�����ֱ�����ʽ
//	for_each(v.begin(), v.end(), print);   //fou_each()��stl��һ���㷨��������ͨ���ص���������ӡ
//}										  //���������Ǻ�����ַ��Ҳ����ָ�룬�ص��������Ǻ���ָ����Ϊ��һ�������Ĳ���
//
//int main()
//{
//	test();
//	test1();
//	test2();
//	return 0;
//}