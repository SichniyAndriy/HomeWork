#include <iostream>
#include <iomanip>
#include <cstring>
#pragma warning(disable:4996)
#pragma once

/*
* - ФИО, 
* - дату рождения
* - контактный телефон
* - город
* - страну
* - название учебного заведения
* - город и страну (где находится учебное заведение)
* - номер группы. 
*/

using namespace std;

struct FI
{
	char* f{ nullptr };
	char* i{ nullptr };
};

struct DateBorn
{
	short day{ 0 };
	short month{ 0 };
	short year{ 0 };
};

class Student
{
public:
	inline void setIDStud(const char* fStr1, const char* fStr2)
	{
		IDStud.f = new char[strlen(fStr1) + 1];
		if (!IDStud.f) { cerr << "Error"; return; }
		strcpy(IDStud.f, fStr1);
		IDStud.i = new char[strlen(fStr2) + 1];
		if (!IDStud.i) { cerr << "Error"; return; }
		strcpy(IDStud.i, fStr2);
	}

	inline void setDateBorn(const short fDay, const short fMonth, const short fYear)
	{
		dateBorn.day = fDay;
		dateBorn.month = fMonth;
		dateBorn.year = fYear;
	}
	void setPhoneNum(const char*);
	void setCityStudent(const char*);
	void setCountryStudent(const char*);
	void setNameEduInst(const char*);
	void setCityEduInst(const char*);
	void setCountryEduInst(const char*);
	void setGroup(const char*);

	inline FI* getIDStud(FI* fStruct)
	{
		FI* newPtr{ nullptr };
		newPtr = new FI;
		if (newPtr) {
			newPtr->f = new char[strlen(fStruct->f) + 1];
			strcpy(newPtr->f, fStruct->f);
			newPtr->i = new char[strlen(fStruct->i) + 1];
			strcpy(newPtr->i, fStruct->i);
		}
		return newPtr;
	}
	inline DateBorn* getDateBorn(DateBorn* fStruct)
	{
		DateBorn* newPtr{ nullptr };
		newPtr = new DateBorn;
		if (newPtr) {
			newPtr->day = fStruct->day;
			newPtr->month = fStruct->month;
			newPtr->year = fStruct->year;
		}
		return newPtr;
	}
	const char* getPhoneNum() const;
	const char* getCityStudent() const;
	const char* getCountryStudent() const;
	const char* getNameEduInst() const;
	const char* getCityEduInst() const;
	const char* getCountryEduInst() const;
	const char* getGroup() const;

	void Init();
	void Show();

private:
	FI IDStud;
	DateBorn dateBorn;
	char* phoneNum{ nullptr };
	char* cityStudent{ nullptr };
	char* countryStudent{ nullptr };
	char* nameEduInst{ nullptr };
	char* cityEduInst{ nullptr };
	char* countryEduInst{ nullptr };
	char* group{ nullptr };
};