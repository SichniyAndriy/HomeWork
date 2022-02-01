/*Если выписать все натуральные числа меньше 10, кратные 3 или 5, то получим 3, 5, 6 и 9.
Сумма этих чисел равна 23. Найдите сумму всех чисел меньше 1000, кратных 3 или 5.*/

#include <iostream>
#include <iomanip>
#define N 1000

using namespace std;

int main()
{
	setlocale(0, "");

	//инициализация массива и вывод на экран
	unsigned i, arr[N]{ 0 };
	for (i = 0; i < N; i++) {
		arr[i] = i;
		cout.width(5); cout << arr[i];
		if ((i + 1) % 20 == 0) cout << "\n";
	}
	cout << "\n";

	//поиск кратных 3 и 5 и добавление их к сумме
	unsigned sum = 0;
	for (i = 3; i < N; i++) {
		if (arr[i] % 3 == 0 || arr[i] % 5 == 0) sum += arr[i];
	}
	cout << "Сумма всех чисел меньше 1000, кратных 3 или 5. " << sum << endl;

}