/*������� �1
���������� ����� ��������. ���������� ������� � ����������-������ ������:
- ���, 
- ���� ��������
- ���������� �������
- �����, ������
- �������� �������� ���������
- ����� � ������ (��� ��������� ������� ���������)
- ����� ������. 
���������� �������-����� ������ ��� ����� ������, ������ ������, 
���������� ��������� � ������������ ��� ������� � ��������� ����������������,
�������� ��������� ������� � ��������� inline. */

#include "Header.h"

int main()
{
	setlocale(0, "");
	Student Sicn;
	void (Student:: * ptrSetC[])(const char*) = {
												&Student::setPhoneNum,
												&Student::setCityStudent,
												&Student::setCountryStudent,
												&Student::setNameEduInst,
												&Student::setCityEduInst,
												&Student::setCountryEduInst,
												&Student::setGroup
												};

	
	Sicn.setIDStud("Sichniy", "Andriy");
	Sicn.setDateBorn(26, 8, 1981);
	//Sicn.setPhoneNum("+38 (067) 256-53-96");
	(Sicn.*ptrSetC[0])("+38 (067) 256-53-96");
	(Sicn.*ptrSetC[1])("Kremenchuk");
	(Sicn.*ptrSetC[2])("Ukraine");
	(Sicn.*ptrSetC[3])("IT Step");
	(Sicn.*ptrSetC[4])("Kremenchuk");
	(Sicn.*ptrSetC[5])("Ukraine");
	(Sicn.*ptrSetC[6])("BV121");
	Sicn.Show();
	cout << endl;
	//Student X;
	//X.Init();
	//cout << endl;
	//X.Show();
	//cout << endl;
	return 0;
}