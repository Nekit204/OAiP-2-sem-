//3 ������� 1 �������
#include <iostream>  
#include<fstream>
# define str_len 256 
# define size 100  
using namespace std;
void enter_new();
void out();
void del();
void search();
struct Pupil 
{
	char name[str_len];
	char surname[str_len];
	char middleName[str_len];
    unsigned  number : 4;
	unsigned letter :8;
	float average_scoree;
}; 
enum Subjects
{
 Math, Biology, History, Chemistry, Physics, Englysh, PE, Geography
} subject;
	int marks;
	int average_score;	
 struct Pupil pupilss_of_school[size];
int current_size = 0; int choice;
Pupil b;
Pupil all;
int l;
char f;
float markss[8];
float average;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	cout << "�������:" << endl;
	cout << "1-��� ����� ������" << endl;
	cout << "2-��� ������ ������" << endl;
	cout << "3-��� ��������" << endl;
	cout << "4-��� ������ ����������" << endl;
	cout << "5-��� ������" << endl;
	cin >> choice;
	do
	{
		switch (choice)
		{
		case 1:  enter_new();	break;
		case 2:  out();  break;
		case 3:  del();  break;
		case 4:  search();	break;


		}
	} while (choice != 5);
}
void enter_new()
{
	cout << "���� ����������" << endl;
	if (current_size < size)
	{
		cout << "������ ����� ";
		cout << current_size + 1;
		cout << endl << "�������" << endl;
		cin >> pupilss_of_school[current_size].surname;
		cout << "���" << endl;
		cin >> pupilss_of_school[current_size].name;
		cout << "��������" << endl;
		cin >> pupilss_of_school[current_size].middleName;
		cout << "�����: " << endl;
		cin >> l; b.number = l;
		cin >> f; b.letter = f;
		cout << "��������:" << endl;
		Subjects::Math;
		cout << "���������:";
		cin>> markss[0];
		cout << "\n";
		Subjects::Biology;
		cout << "��������:";
		cin >> markss[1];
		cout << "\n";
		Subjects::History;
		cout << "�������:";
		cin >> markss[2];
		cout << "\n";
		Subjects::Chemistry;
		cout << "�����:";
		cin >> markss[3];
		cout << "\n";
		Subjects::Physics;
		cout << "������:";
		cin >> markss[4];
		cout << "\n";
		Subjects::Englysh;
		cout << "����������:";
		cin >> markss[5];
		cout << "\n";
		Subjects::PE;
		cout << "�����������:";
		cin >> markss[6];
		cout << "\n";
		Subjects::Geography;
		cout << "���������:";
		cin >> markss[7];
		cout << "\n";
		cout << "������� ����:" << endl;
		average = ((markss[0] + markss[1] + markss[2] + markss[3] + markss[4] + markss[5] + markss[6] + markss[7]) / 8);
		cout << average << "\n";
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
		cout << pupilss_of_school[n - 1].surname << endl;
		cout << "���:";
		cout << pupilss_of_school[n - 1].name << endl;
		cout << "��������:";
		cout << pupilss_of_school[n - 1].middleName << endl;
		cout << "�����: " << endl;
		cout << l;
		cout << f;
		cout << "\n";
		cout << "�������� � ������:" << endl;
		Subjects::Math;
		cout << "���������:";
		cout<< markss[0];
		cout << "\n";
		Subjects::Biology;
		cout << "��������:";
		cout<< markss[1];
		cout << "\n";
		Subjects::History;
		cout << "�������:";
		cout<< markss[2];
		cout << "\n";
		Subjects::Chemistry;
		cout << "�����:";
		cout<< markss[3];
		cout << "\n";
		Subjects::Physics;
		cout << "������:";
		cout<< markss[4];
		cout << "\n";
		Subjects::Englysh;
		cout << "����������:";
		cout<< markss[5];
		cout << "\n";
		Subjects::PE;
		cout << "�����������:";
		cout<< markss[6];
		cout << "\n";
		Subjects::Geography;
		cout << "���������:";
		cout<< markss[7];
		cout << "\n";
		cout << "������� ����:" << endl;
		cout << average << "\n";

	}
	if (sw == 2)
	{
		for (int i = 0; i < current_size; i++)
		{
			cout << "�������:";
			cout << pupilss_of_school[i].surname << endl;
			cout << "���:";
			cout << pupilss_of_school[i].name << endl;
			cout << "��������:";
			cout << pupilss_of_school[i].middleName << endl;
			cout << "�����: " << endl;
			cout << l;
			cout << f;
			cout << "\n";
			cout << "�������� � ������:" << endl;
			Subjects::Math;
			cout << "���������:";
			cout << markss[0];
			cout << "\n";
			Subjects::Biology;
			cout << "��������:";
			cout << markss[1];
			cout << "\n";
			Subjects::History;
			cout << "�������:";
			cout << markss[2];
			cout << "\n";
			Subjects::Chemistry;
			cout << "�����:";
			cout << markss[3];
			cout << "\n";
			Subjects::Physics;
			cout << "������:";
			cout << markss[4];
			cout << "\n";
			Subjects::Englysh;
			cout << "����������:";
			cout << markss[5];
			cout << "\n";
			Subjects::PE;
			cout << "�����������:";
			cout << markss[6];
			cout << "\n";
			Subjects::Geography;
			cout << "���������:";
			cout << markss[7];
			cout << "\n";
			cout << "������� ����:" << endl;
			cout << average << "\n";
			cout << "_________________________________________________________________________________"<<"\n";

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
		pupilss_of_school[de1] = pupilss_of_school[de1 + 1];
	current_size = current_size - 1;
}
if (d == 99)
for (int i = 0; i < size; i++)
	pupilss_of_school[i] = all;
cout << "��� ������?" << endl;
cin >> choice;
}
void search()
{
	char surname[16];
	cout << "������ ���������:" << "\n";
	cin >> surname;
	for (int z = 0; z < current_size; z++)
	{
		if (strcmp(surname, pupilss_of_school[z].surname) == 0)
		{
			cout << "�������:";
			cout << pupilss_of_school[z].surname << endl;
			cout << "���:";
			cout << pupilss_of_school[z].name << endl;
			cout << "��������:";
			cout << pupilss_of_school[z].middleName << endl;
			cout << "�����: " << endl;
			cout << l;
			cout << f;
			cout << "\n";
			cout << "�������� � ������:" << endl;
			Subjects::Math;
			cout << "���������:";
			cout << markss[0];
			cout << "\n";
			Subjects::Biology;
			cout << "��������:";
			cout << markss[1];
			cout << "\n";
			Subjects::History;
			cout << "�������:";
			cout << markss[2];
			cout << "\n";
			Subjects::Chemistry;
			cout << "�����:";
			cout << markss[3];
			cout << "\n";
			Subjects::Physics;
			cout << "������:";
			cout << markss[4];
			cout << "\n";
			Subjects::Englysh;
			cout << "����������:";
			cout << markss[5];
			cout << "\n";
			Subjects::PE;
			cout << "�����������:";
			cout << markss[6];
			cout << "\n";
			Subjects::Geography;
			cout << "���������:";
			cout << markss[7];
			cout << "\n";
			cout << "������� ����:" << endl;
			cout << average << "\n";
		}
	}
	cout << "��� ������?" << endl;
	cin >> choice;
}