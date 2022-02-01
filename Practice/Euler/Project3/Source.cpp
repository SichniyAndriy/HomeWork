/*ѕростые делители числа 13195 - это 5, 7, 13 и 29.
 аков самый большой делитель числа 600851475143, €вл€ющийс€ простым числом?*/

#include <iostream>
#include <cmath>
#define N 600851475143

using namespace std;

int main()
{
	setlocale(0, "");
	unsigned long long i, x;
	for (i = 3; i < N; i += 2)	{
		cout << i <<  "\n";
		//if (N % i == 0) {
		//	x = i;
		//	cout << i << "\n";
		//}
	}
}