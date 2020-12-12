#include <iostream>  
#include<fstream>
# define str_len 256 
# define size 100  
using namespace std;
void enter_new();
void out();
void del();
void enter_file();
void out_file();
void search();
 struct Bank
{
	char name[str_len];
	char surname[str_len];
	char middleName[str_len];
	char type_of_score[str_len];
	int number_of_score;
	int sum_on_score;
	char lastDate[str_len];
}
 ; struct Bank clients_of_bank[size];
struct Bank all;
int current_size = 0; int choice;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	cout << "�������:" << endl;
	cout << "1-��� ����� ������" << endl;
	cout << "2-��� ������ ������" << endl;
	cout << "3-��� ��������" << endl;
	cout << "4-��� ������ ���������� � ����" << endl;
	cout << "5-��� ������ ������ �� �����" << endl;
	cout << "6-��� ������ ����������" << endl;
	cout << "7-��� ������" << endl;
	cin >> choice;
	do
	{
		switch (choice)
		{
		case 1:  enter_new();	break;
		case 2:  out();  break;
		case 3:  del();  break;
		case 4:  enter_file();break;
		case 5:  out_file();	break;
		case 6:  search();	break;
		

		}
	} while (choice != 7);
}
void enter_new( )
{
cout << "���� ����������" << endl;
        if (current_size < size)
		{
			cout << "������ ����� ";
			cout << current_size + 1;
			cout << endl << "�������" << endl;
			cin >> clients_of_bank[current_size].surname;
			cout << "���" << endl;
			cin >> clients_of_bank[current_size].name;
			cout << "��������" << endl;
			cin >> clients_of_bank[current_size].middleName;
			cout << "��� ����� " << endl;
			cin >> clients_of_bank[current_size].type_of_score;
			cout << "����� ����� " << endl;
			cin >> clients_of_bank[current_size].number_of_score;
			cout << "����� �� ����� " << endl;
			cin >> clients_of_bank[current_size].sum_on_score;
			cout << "���� ���������� ���������" << endl;
			cin >> clients_of_bank[current_size].lastDate;
			current_size++;	
		}
		else
		cout << "������� ������������ ���-�� �����";
		cout << "��� ������?" << endl;
		cin >> choice;
}
void out()
{
	int sw, n;
	cout << "1-����� 1 ������" << endl;
	cout << "2-����� ���� �����" << endl;
	cin >> sw;
	if (sw == 1)
	{
		cout << "����� ��������� ������: " << endl;   cin >> n;  cout << endl;
		cout << "�������:";
		cout << clients_of_bank[n - 1].surname << endl;
		cout << "���:";
		cout << clients_of_bank[n - 1].name << endl;
		cout << "��������:";
		cout << clients_of_bank[n - 1].middleName << endl;
		cout << "��� �����:";
		cout << clients_of_bank[n - 1].type_of_score << endl;
		cout << "����� �����:";
		cout << clients_of_bank[n - 1].number_of_score << endl;
		cout << "����� �� �����: ";
		cout << clients_of_bank[n - 1].sum_on_score << endl;
		cout << "���� ���������� ���������:";
		cout << clients_of_bank[n - 1].lastDate << endl;
	}
	if (sw == 2)
	{
		for (int i = 0; i < current_size; i++)
		{
			cout << "�������: ";
			cout << clients_of_bank[i].surname << endl;
			cout << "���:";
			cout << clients_of_bank[i].name << endl;
			cout << "��������:";
			cout << clients_of_bank[i].middleName << endl;
			cout << "��� �����:";
			cout << clients_of_bank[i].type_of_score << endl;
			cout << "����� �����: ";
			cout << clients_of_bank[i].number_of_score << endl;
			cout << "����� �� �����: ";
			cout << clients_of_bank[i].sum_on_score << endl;
			cout << "���� ���������� ���������: ";
			cout << clients_of_bank[i].lastDate << endl;
		}
	}
	cout << "��� ������?" << endl;
	cin >> choice;
}
void del()
{
	int d;
	cout << "\n����� ������, ������� ���� ������� (��� �������� ���� ����� ������ 99)" << endl;  
	cin >> d;
	if (d != 99)
	{
		for (int de1 = (d - 1); de1 < current_size; de1++)
			clients_of_bank[de1] = clients_of_bank[de1 + 1];
		current_size = current_size - 1;
	}
	if (d == 99)
		for (int i = 0; i < size; i++)
			clients_of_bank[i] = all;
	cout << "��� ������?" << endl;
	cin >> choice;
}
void enter_file()
{
	int n=0;
	ofstream file1("Clients.txt");
	if (file1.fail())
	{
		cout << "\n ������ �������� �����";
		exit(1);
	}
	for (int p = 0; p < current_size; p++,n++)
	{
			file1 << "�������:" << clients_of_bank[p].surname << "\n";
			file1 << "���:" << clients_of_bank[p].name << "\n";
			file1 << "��������:" << clients_of_bank[p].middleName << "\n";
			file1 << "��� �����:" << clients_of_bank[p].type_of_score << "\n";
			file1 << "����� �����:" << clients_of_bank[p].number_of_score << "\n";
			file1 << "����� �� �����:" << clients_of_bank[p].sum_on_score << "\n";
			file1 << "���� ���������� ���������:" << clients_of_bank[p].lastDate << "\n";
	}
		file1.close();
		if (n == current_size)
		{
			cout << "������ �������� � ����" <<endl ;
			cout << "��� ������?" << endl;
			cin >> choice;
		}
}
void out_file()
{
	int l = 0; char str[50];
	ifstream file2("Clients.txt");
	if (file2.fail())
	{
		cout << "\n ������ �������� �����";
		exit(1);
	}
		for (int p = 0; p < current_size; p++, l++)
		{
			while (!file2.eof())
			{
				file2.getline(str, 50);
				cout << str << "\n";
			}
		}
		file2.close();
		if (l == current_size)
		{
			cout << "��� ������?" << endl;
			cin >> choice;
		}
	
}
void search()
{
	int number;
	cout << "������� ����� �����:" << "\n";
	cin >> number;
	for (int z = 0; z < current_size; z++)
	{
		if (number == clients_of_bank[z].number_of_score)
		{
			cout << "�������: ";
			cout << clients_of_bank[z].surname << endl;
			cout << "���:";
			cout << clients_of_bank[z].name << endl;
			cout << "��������:";
			cout << clients_of_bank[z].middleName << endl;
			cout << "��� �����:";
			cout << clients_of_bank[z].type_of_score << endl;
			cout << "����� �����: ";
			cout << clients_of_bank[z].number_of_score << endl;
			cout << "����� �� �����: ";
			cout << clients_of_bank[z].sum_on_score << endl;
			cout << "���� ���������� ���������: ";
			cout << clients_of_bank[z].lastDate << endl;
		}
	}
	cout << "��� ������?" << endl;
	cin >> choice;
}
