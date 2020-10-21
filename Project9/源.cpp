#include<iostream>
using namespace std;

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int m = sizeof(arr) / sizeof(arr[0]) - 1;
	int* p = &arr[0];
	int* q = &arr[m];
	while (p < q)
	{
		int tmp = *q;
		*q = *p;
		*p = tmp;
		p++;
		q--;
	}
	for (int i = 0; i < m + 1; i++)
	{
		cout << arr[i] << "  ";
	}
	return 0;
}

