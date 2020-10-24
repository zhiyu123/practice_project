#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1 = "hello";
	str1 += "world";
	cout << str1 << endl;

	str1 += '!';
	cout << str1 << endl;

	string str2 = " China";
	str1 += str2;
	cout << str1 << endl;

	string str3 = "i";
	str3.append("love");
	cout << str3 << endl;

	str3.append("gameabcd", 4);
	cout << str3 << endl;

	str3.append(str2);
	cout << str3 << endl;

	str3.append(str2, 0, 3);
	cout << str3 << endl;
	return 0;
}