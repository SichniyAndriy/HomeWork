/*
* �������.
* ���� ������ ��������, ��������� �����, ������� ��������. � ������ ����� ����
* ��������, �������, ���������� ������. ������ ����� ���� ������������ �
* ������������. ���������� ��������� ������������ ����������� ������.
* ��� ���� ����������, ����� ����������� ��������� �������:
* 1. ������ ����������� ������ ������ ����� ������ ����� �� �����������. 
* �������� ����� ������ ���� �����.
* 2. ����������� � ����������� ���� ������ ������ ����� ������ ���� ���������
* ����������� �� ��������� ���� � �����.
* 
* ������ ���������� ������: ({x-y-z}*[x+2y]-(z+4x));
* ������ ������������ ������: ([x-y-z}*[x+2y)-{z+4x)].
* ���� ��� ������� ��������� �������� �������������� ��������� � ������������ ������, 
* ����� �������� ������ �� ����� ������������� ������ ������.
*/

#include "Class.h"

int main()
{
	Stack a;

	cout << "Input formula: ";
	char buff[255];
	cin.getline(buff, 256);
	char* ptr = strpbrk(buff, "()[]{}");
	int x{}, y{}, z{};
	while(ptr)
	{
		a.push(*ptr);
		switch (*ptr)
		{
		case '(': ++x; break;
		case ')': --x; break;
		case '{': ++y; break;
		case '}': --y; break;
		case '[': ++z; break;
		case ']': --z; break;
		}
		ptr = strpbrk(ptr + 1, "()[]{}");
	}
	//a.show();
	if (!x and !y and !z)
	{
		cout << "Correct\n";
	}
	else
	{
		cout << "Uncorrect\n";
	}

	return 0;
}