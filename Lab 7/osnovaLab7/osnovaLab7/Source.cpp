#include<iostream>
#include<tchar.h>
#include"number.h"
#include<fstream>
#include <string>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Rus");
	Queue* begin = NULL, * end, * t;
	t = new  Queue;
	int p;
	int max_size, choice;
	int current_size = 0;
	cout << "\n������� ������������ ������ �������=";  cin >> max_size;
	cout << "������� ������ ������� �������= ";       cin >> p;
	t->info = p;        
	t->next = NULL;
	begin = end = t;
	for (;;)
	{
		cout << "�������� �������:" << endl;
		cout << "1 - ���������� �������� � �������" << endl;
		cout << "2 - ����� �������" << endl;
		cout << "3 - ����� ������������� �������� �������" << endl;
		cout << "4 -������ ������� " << endl;
		cout << "5 -�������� ���� ���������" << endl;
		cout << "6 - �������� ��������� ������� " << endl;
		cout << "7 - �����" << endl;
		
		cin >> choice;
		 switch (choice)
		{
			
		case 1: 
			if (current_size < max_size)
				cout << "Enter number= ";   
			    cin >> p;
				create(&begin, &end, p);
				current_size++;
			break;
		case 2: 
			cout << "\n�������� �������: \n";
			if (begin == NULL)   
				cout << "��� ���������" << endl;
			else
				view(begin);
			break;
		case 3:
			maxElem(begin);
			break;
		case 4:
			if (begin == NULL)
				cout << "��� ���������" << endl;
			else
				size(begin);
			break;
		case 5:
			del3(&begin);
			break;
		case 6:
			delAll(&begin);
				break;
		case 7:
			return 0;
			break;
		}
	}
	return 0;
}
