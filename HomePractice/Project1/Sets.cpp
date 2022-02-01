#include "Header.h"

void Student::setPhoneNum(const char* fStr)
{
	if (this->phoneNum) delete[] phoneNum;
	this->phoneNum = new char[strlen(fStr) + 1];
	strcpy(this->phoneNum, fStr);
}

void Student::setCityStudent(const char* fStr)
{
	if (this->cityStudent) delete[] cityStudent;
	this->cityStudent = new char[strlen(fStr) + 1];
	strcpy(this->cityStudent, fStr);
}

void Student::setCountryStudent(const char* fStr)
{
	if (this->countryStudent) delete[] countryStudent;
	this->countryStudent = new char[strlen(fStr) + 1];
	strcpy(this->countryStudent, fStr);
}

void Student::setNameEduInst(const char* fStr)
{
	if (this->nameEduInst) delete[] nameEduInst;
	this->nameEduInst = new char[strlen(fStr) + 1];
	strcpy(this->nameEduInst, fStr);
}

void Student::setCityEduInst(const char* fStr)
{
	if (this->cityEduInst) delete[] cityEduInst;
	this->cityEduInst = new char[strlen(fStr) + 1];
	strcpy(this->cityEduInst, fStr);
}

void Student::setCountryEduInst(const char* fStr)
{
	if (this->countryEduInst) delete[] countryEduInst;
	this->countryEduInst = new char[strlen(fStr) + 1];
	strcpy(this->countryEduInst, fStr);
}

void Student::setGroup(const char* fStr)
{
	if (this->group) delete[] group;
	this->group = new char[strlen(fStr) + 1];
	strcpy(this->group, fStr);
}