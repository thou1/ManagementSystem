#include "employee.h"

Employee::Employee(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DepId= dId;
}

void Employee::showInfo()
{
	cout << "ְ����ţ� " << this->m_Id
		<< " \tְ�������� " << this->m_Name
		<< " \t��λ��" << this->getDepName()
		<< " \t��λְ����ɾ�������������" << endl;
}


string Employee::getDepName()
{
	return string("Ա��");
}