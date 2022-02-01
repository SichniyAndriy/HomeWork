#include <iostream>

using namespace std;

class Fish
{
private:
	bool isFreshWater;

public:
	Fish(bool isFresh) : isFreshWater(isFresh) {}

	void swim() { cout << (isFreshWater ? "Пресноводная" : "Морская") << endl; }
};

class Tuna : public Fish
{
public:
	Tuna() : Fish(false) {}
};

class Carp : public Fish
{
public:
	Carp() : Fish(true){}
};

int main()
{
	setlocale(0, "");

	Carp Lunch;
	Tuna Dinner;
	
	cout << "Обед: ";
	Lunch.swim();
	cout << "Ужин: ";
	Dinner.swim();

	return 0;
}