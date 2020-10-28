#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

void print(const list<int>& L)
{
	for (list<int>::const_iterator it_ptr = L.begin(); it_ptr != L.end(); it_ptr++)
	{
		cout << *it_ptr << " ";
	}
	cout << endl;
}
int main()
{
	list<int> L1;
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(30);
	L1.push_back(3);
	print(L1);
	
	L1.reverse();
	print(L1);

	L1.sort();
	print(L1);
	return 0;
}