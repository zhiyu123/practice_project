#include"person.h"

void print(vector<Person>& v)
{
	for (vector<Person>::iterator it_ptr = v.begin(); it_ptr != v.end(); it_ptr++)
	{
		cout << "姓名：" << (*it_ptr).m_name << "\t" << "分数：" << (*it_ptr).m_score << endl;
	}
}

void calculate_score()
{
	Person p1("zhangsan");
	Person p2("lihua");
	Person p3("marry");
	Person p4("tom");
	Person p5("jerry");
	vector<Person> v;
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	vector<Person>::iterator it_ptr = v.begin();
	for (int i = 0; i < 5; i++)
	{
		deque<int> d;
		int num;
		for (int j = 0; j < 10; j++)
		{
			cout << "请输入第" << j + 1 << "位评委" << "对第" << i + 1 << "位选手的打分：";
			cin >> num;
			d.push_back(num);
		}
		sort(d.begin(), d.end());
		d.pop_front();
		d.pop_back();
		double sum = 0.0;
		for (int i = 0; i < d.size(); i++)
		{
			sum += d[i];
		}

		sum = sum / 8;
		(*it_ptr).m_score = sum;
		it_ptr++;
	}
	print(v);
}

int main()
{
	calculate_score();
	return 0;
}