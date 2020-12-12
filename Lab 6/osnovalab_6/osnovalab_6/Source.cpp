#include <iostream>
#include<tchar.h>
#include"MyStack.h"
#include<fstream>
#include <string>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Rus");
	int choice;
	Stack* myStk = new Stack; 
	myStk->head = NULL; 
	for (;;)
	{
		cout << "�������� �������:" << endl;
		cout << "1 - ���������� �������� � ����" << endl;
		cout << "2 - ���������� �������� �� �����" << endl;
		cout << "3 -  �������� �����" << endl;
		cout << "4 - ����� �����" << endl;
		cout << "5 - ������ � ����" << endl;
		cout << "6- ������ �� �����" << endl;
		cout << "7- Delete" << endl;
		cout << "8 - �����" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1: cout << "������� �������: " << endl;
			cin >> choice;
			push(choice, myStk);
			break;
		case 2: choice = pop(myStk);
			if (choice != -1)
				cout << "����������� �������: " << choice << endl;
			break;
		case 3: 
			clear(myStk);
			break;
		case 4:
			cout << "���� ����: " << endl;
			show(myStk);
			break;
		case 5:
			inFile(myStk);
			break;
		case 6:
			fromFile(myStk);
			break;
		case 7:
			dl(myStk);
			break;
		case 8: return 0;
			break;
		}
	}
	return 0;
}
