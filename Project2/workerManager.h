#pragma once
#include<iostream>
#include"worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include <fstream>
#define  FILENAME "empFile.txt"
using namespace std;



class WorkerManager
{
public:
	//��ʼ������
	int m_EmpNum;
	//��ʼ������ָ��
	Worker ** m_EmpArray;
	//��־�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;
	//���캯��
	WorkerManager();
	//�����ļ�
	void save();
	//�˵�
	void showMeuu();
	void exitSystem();
	//���Ա��
	void Add_Emp();
	//ͳ������
	int get_EmpNum();
	//��ʼ��Ա��
	void init_Emp();
	//��ʾְ��
	void Show_Emp();
	//ɾ��ְ��
	void Del_Emp();
	//����ְ������ж�ְ���Ƿ����,�����ڷ���ְ����������λ�ã������ڷ���-1
	int IsExist(int id);
	//�޸�ְ��
	void Mod_Emp();
	//����ְ��
	void Find_Emp();
	//����ְ��
	void Sort_Emp();
	//����ļ�
	void Clean_File();
	//��������
	~WorkerManager();

};