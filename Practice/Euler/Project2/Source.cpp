/*������ ��������� ������� ���� ��������� ���������� ��� �������� ���� ����������.
������� � 1 � 2, ������ 10 ��������� �����: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
������� ����� ���� ������ ��������� ���� ���������, ������� �� ��������� ������ ��������.*/

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	unsigned  x1 = 1, x2 = 2, x = 0, sum2 = 0;
	while (x < 4000000) {
		x = x1 + x2;
		if (x % 2 == 0)	sum2 += x;
		x1 = x2;
		x2 = x;
	}
	cout << "����� ���� ������ ��������� ���� ���������, "
			<< "������� �� ��������� ������ �������� : " << sum2 << endl;
}