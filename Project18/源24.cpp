//#include<iostream>
//#include<numeric>
//#include<functional>
//#include<vector>
//#include<algorithm>
//using namespace std;
//void print(int val)
//{
//	cout << val << " ";
//}
//int main()
//{
//	vector<int> v1;
//	vector<int> v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//
//	vector<int> v3;
//	v3.resize(min(v1.size(), v2.size()));//�����Ĵ�СȡС�����Ĵ�С����
//
//	vector<int>::iterator it = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//
//	for_each(v3.begin(), it, print); //������д�ĵ���������Ҫ��v3.end()��set_interssection���ص��ǽ�������Ԫ�ص����һ��λ��
//	cout << endl;
//
//}