#include <iostream>  
#include<fstream>
# define size 100  
using namespace std;
void enter_new();
void out();
void search();
union  forstud
{
	char str[40];
	int limb;
	float nim;
};
struct stud
{
	forstud name;
	forstud surname;
	forstud middleName;
	forstud enterDate;
	forstud type;
	forstud group;
	forstud faculty;
	forstud average;
};
stud students[size];
int current_size = 0; int choice;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	cout << "�������:" << endl;
	cout << "1-��� ����� ������" << endl;
	cout << "2-��� ������ ������" << endl;
	cout << "3-��� ������ ����������" << endl;
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
		cout << endl << "�������" << endl;
		cin >> students[current_size].surname.str;
		cout << "���" << endl;
		cin >> students[current_size].name.str;
		cout << "��������" << endl;
		cin >> students[current_size].middleName.str;
		cout << "���� �����������: " << endl;
		cin >> students[current_size].enterDate.str;
		cout << "�������������:" << endl;
		cin >> students[current_size].type.str;
		cout << "������:" << endl;
		cin >> students[current_size].group.limb;
		cout << "���������:" << endl;
		cin >> students[current_size].faculty.str;
		cout << "������� ����:" << endl;
		cin >> students[current_size].average.nim;
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
		cout << "����� ��������� ������: " << endl;
		cin >> n;
		cout << endl;
		cout << "�������" << endl;
		cout<< students[n-1].surname.str;
		cout << "���" << endl;
		cout<< students[n-1].name.str;
		cout << "��������" << endl;
		cout<< students[n-1].middleName.str;
		cout << "���� �����������: " << endl;
		cout<< students[n-1].enterDate.str;
		cout << "�������������:" << endl;
		cout<< students[n-1].type.str;
		cout << "������:" << endl;
		cout<< students[n-1].group.limb;
		cout << "���������:" << endl;
		cout<< students[n-1].faculty.str;
		cout << "������� ����:" << endl;
		cout<< students[n-1].average.nim;
	}
	if (sw == 2)
	{
		for (int i = 0; i < current_size; i++)
		{
			cout << "�������" << endl;
			cout << students[i].surname.str;
			cout << "���" << endl;
			cout << students[i].name.str;
			cout << "��������" << endl;
			cout << students[i].middleName.str;
			cout << "���� �����������: " << endl;
			cout << students[i].enterDate.str;
			cout << "�������������:" << endl;
			cout << students[i].type.str;
			cout << "������:" << endl;
			cout << students[i].group.limb;
			cout << "���������:" << endl;
			cout << students[i].faculty.str;
			cout << "������� ����:" << endl;
			cout << students[i].average.nim;
		}
	}
	cout << "��� ������?" << endl;
	cin >> choice;
}
void search()
{
	float aver;
	cout << "������� ������� ����:" << "\n";
	cin >> aver;
	for (int z = 0; z < current_size; z++)
	{
		if (students[z].average.nim==aver)
		{
			cout << "�������" << endl;
			cout << students[z].surname.str;
			cout << "���" << endl;
			cout << students[z].name.str;
			cout << "��������" << endl;
			cout << students[z].middleName.str;
			cout << "���� �����������: " << endl;
			cout << students[z].enterDate.str;
			cout << "�������������:" << endl;
			cout << students[z].type.str;
			cout << "������:" << endl;
			cout << students[z].group.limb;
			cout << "���������:" << endl;
			cout << students[z].faculty.str;
			cout << "������� ����:" << endl;
			cout << students[z].average.nim;
		}
	}
	cout << "��� ������?" << endl;
	cin >> choice;
}