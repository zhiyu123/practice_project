//#include<iostream>
//#include<vector>
//using namespace std;
//
//void test1(void)
//{
//	vector<vector<int>> v;    //����������С����
//	vector<int> v1;				//�ĸ�С����
//	vector<int> v2;
//	vector<int> v3;
//	vector<int> v4;
//
//	for (int i = 0; i < 4; i++)	//��С�����в���Ԫ��
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//	}
//
//	v.push_back(v1);     //���������в����ĸ�С����
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//
//	for (vector<vector<int>>::iterator it_begin = v.begin(); it_begin != v.end(); it_begin++)
//	{
//		for (vector<int>::iterator vit_begin = (*it_begin).begin(); vit_begin != (*it_begin).end(); vit_begin++)
//		{
//			cout << *vit_begin << " ";
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{
//	test1();
//	return 0;
//}