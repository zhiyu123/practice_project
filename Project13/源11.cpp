//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//void test()
//{
//	int num = 0;
//	int* p = NULL;
//	vector<int> v;
//	v.reserve(10000);    //Ԥ��10000�Ŀռ�
//	for (int i = 0; i < 10000; i++) //ͳ�ƿ����¿ռ�Ĵ���
//	{
//		v.push_back(i);
//		if (p != &v[0])      //vector����ʱ���������һ������Ŀռ����洢�������׵�ַ��仯
//		{
//			p = &v[0];       //����ͨ��pÿ��ָ���vector�������׵�ַ��һ����ͳ��һ�����ݶ��ٴ�
//			num++;
//		}
//	}
//	cout << num << endl;      //numԭ�ȵ���23������reserve������1
//}
//
//int main()
//{
//	test();
//	return 0;
//}