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
	cout << "Введите:" << endl;
	cout << "1-для ввода записи" << endl;
	cout << "2-для вывода записи" << endl;
	cout << "3-для поиска информации" << endl;
	cout << "4-для выхода" << endl;
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
	cout << "Ввод информации" << endl;
	if (current_size < size)
	{
		cout << "Строка номер ";
		cout << current_size + 1;
		cout << endl << "Фамилия" << endl;
		cin >> students[current_size].surname.str;
		cout << "Имя" << endl;
		cin >> students[current_size].name.str;
		cout << "Отчество" << endl;
		cin >> students[current_size].middleName.str;
		cout << "Дата поступления: " << endl;
		cin >> students[current_size].enterDate.str;
		cout << "Специальность:" << endl;
		cin >> students[current_size].type.str;
		cout << "Группа:" << endl;
		cin >> students[current_size].group.limb;
		cout << "Факультет:" << endl;
		cin >> students[current_size].faculty.str;
		cout << "Средний балл:" << endl;
		cin >> students[current_size].average.nim;
		current_size++;


	}
	else
		cout << "Введено максимальное кол-во строк";
	cout << "Что дальше?" << endl;
	cin >> choice;
}
void out()
{
	int sw, n;
	cout << "1-вывод 1 строки" << endl;
	cout << "2-вывод всех строк" << endl;
	cin >> sw;
	if (sw == 1)
	{
		cout << "Номер выводимой строки: " << endl;
		cin >> n;
		cout << endl;
		cout << "Фамилия" << endl;
		cout<< students[n-1].surname.str;
		cout << "Имя" << endl;
		cout<< students[n-1].name.str;
		cout << "Отчество" << endl;
		cout<< students[n-1].middleName.str;
		cout << "Дата поступления: " << endl;
		cout<< students[n-1].enterDate.str;
		cout << "Специальность:" << endl;
		cout<< students[n-1].type.str;
		cout << "Группа:" << endl;
		cout<< students[n-1].group.limb;
		cout << "Факультет:" << endl;
		cout<< students[n-1].faculty.str;
		cout << "Средний балл:" << endl;
		cout<< students[n-1].average.nim;
	}
	if (sw == 2)
	{
		for (int i = 0; i < current_size; i++)
		{
			cout << "Фамилия" << endl;
			cout << students[i].surname.str;
			cout << "Имя" << endl;
			cout << students[i].name.str;
			cout << "Отчество" << endl;
			cout << students[i].middleName.str;
			cout << "Дата поступления: " << endl;
			cout << students[i].enterDate.str;
			cout << "Специальность:" << endl;
			cout << students[i].type.str;
			cout << "Группа:" << endl;
			cout << students[i].group.limb;
			cout << "Факультет:" << endl;
			cout << students[i].faculty.str;
			cout << "Средний балл:" << endl;
			cout << students[i].average.nim;
		}
	}
	cout << "Что дальше?" << endl;
	cin >> choice;
}
void search()
{
	float aver;
	cout << "Введите средний балл:" << "\n";
	cin >> aver;
	for (int z = 0; z < current_size; z++)
	{
		if (students[z].average.nim==aver)
		{
			cout << "Фамилия" << endl;
			cout << students[z].surname.str;
			cout << "Имя" << endl;
			cout << students[z].name.str;
			cout << "Отчество" << endl;
			cout << students[z].middleName.str;
			cout << "Дата поступления: " << endl;
			cout << students[z].enterDate.str;
			cout << "Специальность:" << endl;
			cout << students[z].type.str;
			cout << "Группа:" << endl;
			cout << students[z].group.limb;
			cout << "Факультет:" << endl;
			cout << students[z].faculty.str;
			cout << "Средний балл:" << endl;
			cout << students[z].average.nim;
		}
	}
	cout << "Что дальше?" << endl;
	cin >> choice;
}