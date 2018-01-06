/*
Palindrome
判断是否为回文——判断用户输入的字符串是否为回文。回文是指正反拼写形式都是一样的词，譬如“racecar”。
*/
#include <iostream>
#include <string>

using namespace std;

int Palindrome()
{ 
	cout << "Please input a character string:";
	string str;
	cin >> str;
	int count = 0;
	for (int i = 0, j = str.size() - 1; i < str.size()/2; i++, j--)
	{
		if (str[i] == str[j])
		{
			count++;
		}
	}
	if (count == (str.size()/2))
	{
		cout << "是回文" << endl;
	}
	else
	{
		cout << "不是回文" << endl;
	}
	return 0;
}