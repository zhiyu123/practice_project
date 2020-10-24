//#include<iostream>
//#include<vector>
//using namespace std;
//
//void test1(void)
//{
//	vector<vector<int>> v;    //大容器包含小容器
//	vector<int> v1;				//四个小容器
//	vector<int> v2;
//	vector<int> v3;
//	vector<int> v4;
//
//	for (int i = 0; i < 4; i++)	//往小容器中插入元素
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//	}
//
//	v.push_back(v1);     //往大容器中插入四个小容器
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