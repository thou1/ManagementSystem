#include<iostream>
using namespace std;
#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

int main() {
	
	WorkerManager vm;
	
	int choice = 0;
	while (1)
	{
		vm.showMeuu();
		cout << "输入选择" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0:
			vm.exitSystem();
			break;
		case 1: //添加职工
			vm.Add_Emp();
			break;
		case 2: //显示职工
			vm.Show_Emp();
			break;
		case 3: //删除职工
			vm.Del_Emp();
			break;
		case 4: //修改职工
			vm.Mod_Emp();
			break;
		case 5: //查找职工
			vm.Find_Emp();
			break;
		case 6: //排序职工
			vm.Sort_Emp();
			break;
		case 7: //清空文件
			vm.Clean_File();
			break;
		default:
			system("cls");
			break;
		}
	}

	system("pause");

	return 0;
}