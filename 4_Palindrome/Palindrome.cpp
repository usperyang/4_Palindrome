/*
Palindrome
�ж��Ƿ�Ϊ���ġ����ж��û�������ַ����Ƿ�Ϊ���ġ�������ָ����ƴд��ʽ����һ���Ĵʣ�Ʃ�硰racecar����
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
		cout << "�ǻ���" << endl;
	}
	else
	{
		cout << "���ǻ���" << endl;
	}
	return 0;
}