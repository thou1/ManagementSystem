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
	//初始化人数
	int m_EmpNum;
	//初始化数组指针
	Worker ** m_EmpArray;
	//标志文件是否为空
	bool m_FileIsEmpty;
	//构造函数
	WorkerManager();
	//保存文件
	void save();
	//菜单
	void showMeuu();
	void exitSystem();
	//添加员工
	void Add_Emp();
	//统计人数
	int get_EmpNum();
	//初始化员工
	void init_Emp();
	//显示职工
	void Show_Emp();
	//删除职工
	void Del_Emp();
	//按照职工编号判断职工是否存在,若存在返回职工在数组中位置，不存在返回-1
	int IsExist(int id);
	//修改职工
	void Mod_Emp();
	//查找职工
	void Find_Emp();
	//排序职工
	void Sort_Emp();
	//清空文件
	void Clean_File();
	//析构函数
	~WorkerManager();

};