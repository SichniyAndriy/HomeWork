#include "Header.h"

const char* Student::getPhoneNum() const
{
	char* newPtr{ nullptr };
	newPtr = new char[strlen(phoneNum) + 1];
	if (newPtr)
		strcpy(newPtr, phoneNum);
	return newPtr;
}

const char* Student::getCityStudent() const
{
	char* newPtr{ nullptr };
	newPtr = new char[strlen(cityStudent) + 1];
	if (newPtr)
		strcpy(newPtr, cityStudent);
	return newPtr;
}

const char* Student::getCountryStudent() const
{
	char* newPtr{ nullptr };
	newPtr = new char[strlen(countryStudent) + 1];
	if (newPtr)
		strcpy(newPtr, countryStudent);
	return newPtr;
}

const char* Student::getNameEduInst() const
{
	char* newPtr{ nullptr };
	newPtr = new char[strlen(nameEduInst) + 1];
	if (newPtr)
		strcpy(newPtr, nameEduInst);
	return newPtr;
}

const char* Student::getCityEduInst() const
{
	char* newPtr{ nullptr };
	newPtr = new char[strlen(cityEduInst) + 1];
	if (newPtr)
		strcpy(newPtr, cityEduInst);
	return newPtr;
}

const char* Student::getCountryEduInst() const
{
	char* newPtr{ nullptr };
	newPtr = new char[strlen(countryEduInst) + 1];
	if (newPtr)
		strcpy(newPtr, countryEduInst);
	return newPtr;
}

const char* Student::getGroup() const
{
	char* newPtr{ nullptr };
	newPtr = new char[strlen(group) + 1];
	if (newPtr)
		strcpy(newPtr, group);
	return newPtr;
}