/*���� �������� ��� ����������� ����� ������ 10, ������� 3 ��� 5, �� ������� 3, 5, 6 � 9.
����� ���� ����� ����� 23. ������� ����� ���� ����� ������ 1000, ������� 3 ��� 5.*/

#include <iostream>
#include <iomanip>
#define N 1000

using namespace std;

int main()
{
	setlocale(0, "");

	//������������� ������� � ����� �� �����
	unsigned i, arr[N]{ 0 };
	for (i = 0; i < N; i++) {
		arr[i] = i;
		cout.width(5); cout << arr[i];
		if ((i + 1) % 20 == 0) cout << "\n";
	}
	cout << "\n";

	//����� ������� 3 � 5 � ���������� �� � �����
	unsigned sum = 0;
	for (i = 3; i < N; i++) {
		if (arr[i] % 3 == 0 || arr[i] % 5 == 0) sum += arr[i];
	}
	cout << "����� ���� ����� ������ 1000, ������� 3 ��� 5. " << sum << endl;

}