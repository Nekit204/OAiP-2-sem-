#include <iostream>
#include <vector>    
#include <algorithm>
#include <string>
#include <ctype.h>
# define str_len 256 
# define size 100  
using namespace std;
void enter_new();
void out();
void search();
struct Sanat
{
	char nameSanat[str_len];
	char location[str_len];
	char treatment_profile[str_len];
	int number_of_trips;
}
; struct Sanat  type_of_sanat[size];
struct Sanat all;
int current_size = 0; int choice;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	cout << "�������:" << endl;
	cout << "1-��� ����� ������" << endl;
	cout << "2-��� ������ ������" << endl;
	cout << "3-��� ������" << endl;
	cout << "4-��� ������" << endl;
	cin >> choice;
	do
	{
		switch (choice)
		{
		case 1:  enter_new();	break;
		case 2:  out();  break;
		case 3:  search();	break;
        }
	} while (choice != 4);
}
void enter_new()
{
	cout << "���� ����������" << endl;
	if (current_size < size)
	{
		cout << "������ ����� ";
		cout << current_size + 1;
		cout << endl << "�������� ���������" << endl;
		cin >>type_of_sanat[current_size].nameSanat;
		cout << "����� ������������" << endl;
		cin >> type_of_sanat[current_size].location;
		cout << "�������� �������" << endl;
		cin >> type_of_sanat[current_size].treatment_profile;
		cout << "���������� �������" << endl;
		cin >> type_of_sanat[current_size].number_of_trips;
		current_size++;
	}
	else
		cout << "������� ������������ ���-�� �����";
	cout << "��� ������?" << endl;
	cin >> choice;
}
void out()
{
	
	for (int i = 0; i < current_size; i++)
	{
		for (int j = i + 1; j < current_size; j++)
		{
			if (strcmp(type_of_sanat[i].nameSanat, type_of_sanat[j].nameSanat) > 0)
			{
				Sanat tmp = type_of_sanat[i];
				type_of_sanat[i] = type_of_sanat[j];
				type_of_sanat[j] = tmp;
			}
		}
	}
	int sw, n;
	cout << "1-����� 1 ������" << endl;
	cout << "2-����� ���� �����" << endl;
	cin >> sw;

	if (sw == 1)
	{
		cout << "����� ��������� ������: " << endl;  
		cin >> n;  
		cout << endl;
		cout << "--------------------------------------------------------------------------"<<"\n";
		cout << "|" << "�������� ���������" << "|";
		cout << "�����������������" << "|";
		cout << "�������� �������" << "|";
		cout << "���������� �������" << "|"<<"\n";
		cout << "---------------------------------------------------------------------------" << "\n";
		cout << "|" <<"    "<<type_of_sanat[n - 1].nameSanat<<"           "<<"|";
		cout  <<"  "<< type_of_sanat[n - 1].location <<"           "<< "|";
		cout <<" "<< type_of_sanat[n - 1].treatment_profile <<"            "<< "|";
		cout  << " " << type_of_sanat[n - 1].number_of_trips <<"            "<< "|" << endl;;
		cout << "----------------------------------------------------------------------------";
	}
	if (sw == 2)                                                                                           //Blood-�������� ������� ����������� �������
		                                                                                                    //Air-�������� ������� ������ � ������ ����������������� �����
	{                                                                                                        //Stomach-�������� ������� ��������������� �������
		cout << "--------------------------------------------------------------------------" << "\n";
		cout << "                        " << "�������� �������:����������� �����" << "\n";
		cout << "--------------------------------------------------------------------------" << "\n";
		cout << "|" << "�������� ���������" << "|";
		cout << "�����������������" << "|";
		cout << "�������� �������" << "|";
		cout << "���������� �������" << "|" << "\n";
		for (int i = 0; i < current_size; i++)
		{
			if (strlen(type_of_sanat[i].treatment_profile) == 5)
			{
				cout << "|" << "    " << type_of_sanat[i].nameSanat << "           " << "|";
				cout << "  " << type_of_sanat[i].location << "          " << "|";
				cout << " " << type_of_sanat[i].treatment_profile << "         " << "|";
				cout << " " << type_of_sanat[i].number_of_trips << "            " << "|" << "\n";
				cout << "-------------------------------------------------------------------------";
				cout << "\n";
			}
		}
		cout << "--------------------------------------------------------------------------" << "\n";
		cout << "                        " << "�������� �������:����������������� �����" << "\n";
		cout << "--------------------------------------------------------------------------" << "\n";
		cout << "|" << "�������� ���������" << "|";
		cout << "�����������������" << "|";
		cout << "�������� �������" << "|";
		cout << "���������� �������" << "|" << "\n";
		for (int i = 0; i < current_size; i++)
		{
			if (strlen(type_of_sanat[i].treatment_profile) == 3)
			{
				cout << "|" << "    " << type_of_sanat[i].nameSanat << "           " << "|";
				cout << "  " << type_of_sanat[i].location << "          " << "|";
				cout << " " << type_of_sanat[i].treatment_profile << "         " << "|";
				cout << " " << type_of_sanat[i].number_of_trips << "            " << "|" << "\n";
				cout << "-------------------------------------------------------------------------";
				cout << "\n";
			}
		}
		cout << "--------------------------------------------------------------------------" << "\n";
		cout << "                        " << "�������� �������:��������������� �������" << "\n";
		cout << "--------------------------------------------------------------------------" << "\n";
		cout << "|" << "�������� ���������" << "|";
		cout << "�����������������" << "|";
		cout << "�������� �������" << "|";
		cout << "���������� �������" << "|" << "\n";
		for (int i = 0; i < current_size; i++)
		{
			if (strlen(type_of_sanat[i].treatment_profile) == 7)
			{
				
				cout << "|" << "    " << type_of_sanat[i].nameSanat << "           " << "|";
				cout << "  " << type_of_sanat[i].location << "          " << "|";
				cout << " " << type_of_sanat[i].treatment_profile << "         " << "|";
				cout << " " << type_of_sanat[i].number_of_trips << "            " << "|" << "\n";
				cout << "-------------------------------------------------------------------------";
				cout << "\n";
			}
		}	
	}
	cout << "\n";
	cout << "��� ������?" << endl;
	cin >> choice;
}
void search()
{
	 char number[16];
	cout << "������� �������� ���������:" << "\n";
	cin >> number;
	for (int z = 0; z < current_size; z++)
	{
		if (strcmp(number,type_of_sanat[z].nameSanat)==0)
		{
			cout << "�������� ���������:" << type_of_sanat[z].nameSanat << endl;
			cout << "����� ������������:" << type_of_sanat[z].location << endl;
			cout << "�������� �������:" <<  type_of_sanat[z].treatment_profile << endl;
			cout << "���������� �������:" << type_of_sanat[z].number_of_trips << endl;
		}
	}
	cout << "��� ������?" << endl;
	cin >> choice;
}