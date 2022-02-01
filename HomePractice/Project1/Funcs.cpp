#include "Header.h"

void Student::Init()
{
	char buff1[32], buff2[32];
	cout << "\n�������: ";
	cin.getline(buff1, 32);
	cout << "\n���: ";
	cin.getline(buff2, 32);
	setIDStud(buff1, buff2);
	cout << "\n������� ���� ��������(���� ����� ���): ";
	short day{ 0 }, month{ 0 }, year{ 0 };
	do {
		cin >> day;
		if (cin.fail()) { cin.clear(); while (cin.get() != '\n'); }
	} while (day < 1 || day > 31);
	do {
		cin >> month;
		if (cin.fail()) { cin.clear(); while (cin.get() != '\n'); }
	} while (month < 1 || month > 12);
	do {
		cin >> year;
		if (cin.fail()) { cin.clear(); while (cin.get() != '\n'); }
	} while (year < 1582 || year > 2999);
	setDateBorn(day, month, year);
	cin.ignore();
	cout << "����� ��������: ";
	cin.getline(buff1, 32);
	setPhoneNum(buff1);
	cout << "����� ��������: ";
	cin.getline(buff1, 32);
	setCityStudent(buff1);
	cout << "������ ��������: ";
	cin.getline(buff1, 32);
	setCountryStudent(buff1);
	cout << "�������� �������� ���������: ";
	cin.getline(buff1, 32);
	setNameEduInst(buff1);
	cout << "����� �������� ���������: ";
	cin.getline(buff1, 32);
	setCityEduInst(buff1);
	cout << "������ �������� ���������: ";
	cin.getline(buff1, 32);
	setCountryEduInst(buff1);
	cout << "������: ";
	cin.getline(buff1, 32);
	setGroup(buff1);
}

void Student::Show()
{
	FI* ptrFI = getIDStud(&IDStud);
	cout << "�������: " << ptrFI->f << "\n���: " << ptrFI->i;
	DateBorn* ptrDB = getDateBorn(&dateBorn);
	cout << "\n���� ��������: " << setfill('0') << setw(2) << ptrDB->day << '.'
		<< setfill('0') << setw(2) << ptrDB->month << '.'
		<< setfill('0') << setw(4) << ptrDB->year;
	cout << "\n����� ��������: " << getPhoneNum();
	cout << "\n����� ��������: " << getCityStudent();
	cout << "\n������ ��������: " << getCountryStudent();
	cout << "\n�������� �������� ���������: " << getNameEduInst();
	cout << "\n����� �������� ���������: " << getCityEduInst();
	cout << "\n������ �������� ���������: " << getCountryEduInst();
	cout << "\n������: " << getGroup();
}