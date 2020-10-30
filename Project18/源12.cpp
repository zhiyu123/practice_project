//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
//using namespace std;
//
//int main()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	v.push_back(4);
//	int num = count(v.begin(), v.end(), 4);
//	cout << num << endl;
//
//	class person
//	{
//	public:
//		person(int age, string name)
//		{
//			m_age = age;
//			m_name = name;
//		}
//
//		bool operator==(const person& p)
//		{
//			if (this->m_age == p.m_age)
//			{
//				return true;
//			}
//			else
//			{
//				return false;
//			}
//		}
//
//		int m_age;
//		string m_name;
//	};
//
//	person p1(30, "jim");
//	person p2(40, "tom");
//	person p3(70, "jerry");
//	person p4(58, "lihua");
//	vector<person> v2;
//	v2.push_back(p1);
//	v2.push_back(p2);
//	v2.push_back(p3);
//	v2.push_back(p4);
//
//	person p5(58, "huazi");
//	int ret = count(v2.begin(), v2.end(), p5);
//	cout << ret << endl;
//	return 0;
//}