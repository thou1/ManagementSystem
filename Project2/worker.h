#pragma once
#include<iostream>
#include<string>
using namespace std;

class Worker
{
public:
	//��ʾ������Ϣ
	virtual void showInfo() = 0;
	//��ȡ��λ����
	virtual string getDepName() = 0;

	int m_Id;//Ա�����
	string m_Name;//Ա������
	int m_DepId;//���ű��

};