#include "boss.h"

Boss::Boss(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DepId = dId;

}

void Boss::showInfo()
{
	cout << "ְ����ţ� " << this->m_Id
		<< " \tְ�������� " << this->m_Name
		<< " \t��λ��" << this->getDepName()
		<< " \t��λְ�𣺹�����˾��������" << endl;
}

string Boss::getDepName()
{
	return string("�ܲ�");
}