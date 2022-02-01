#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using std::cout;
using std::endl;
using std::sort;

bool cmpr(double a, double b) { return a > b; }

template <typename T>
void Init(T*, int);
template <typename T>
void Show(const T*, int);

int main()
{
	setlocale(0, "");
	srand(unsigned(time(NULL)));

	int size = 120;
	double* ptr = new double[size];
	Init(ptr, size);
	Show(ptr, size);
	sort(ptr, ptr + size, cmpr);
	Show(ptr, size);

	delete[] ptr;
	return 0;
}

template <typename T>
void Init(T* fArr, const int length)
{
	for (int i = 0; i < length; ++i) {
		fArr[i] = double(rand() % 500) + (rand() % 100) / 100.;
	}

}
template <typename T>
void Show(const T* fArr, const int length)
{
	for (int i = 0; i < length; ++i) {
		cout  << std::fixed << std::setw(10) << std::setprecision(2) << fArr[i];
	}
	cout << "\n\n";
}