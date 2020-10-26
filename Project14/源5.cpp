#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

void print(deque<int>& d)
{
	for (deque<int>::iterator it_ptr = d.begin(); it_ptr != d.end(); it_ptr++)
	{
		cout << *it_ptr << " ";
	}
	cout << endl;
}

void test(void)
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(8);
	d1.push_front(40);
	d1.push_front(4);
	print(d1);
	sort(d1.begin(), d1.end());
	print(d1);
}
int main()
{
	test();
	return 0;
}