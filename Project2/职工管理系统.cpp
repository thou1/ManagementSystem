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
		cout << "����ѡ��" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0:
			vm.exitSystem();
			break;
		case 1: //���ְ��
			vm.Add_Emp();
			break;
		case 2: //��ʾְ��
			vm.Show_Emp();
			break;
		case 3: //ɾ��ְ��
			vm.Del_Emp();
			break;
		case 4: //�޸�ְ��
			vm.Mod_Emp();
			break;
		case 5: //����ְ��
			vm.Find_Emp();
			break;
		case 6: //����ְ��
			vm.Sort_Emp();
			break;
		case 7: //����ļ�
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