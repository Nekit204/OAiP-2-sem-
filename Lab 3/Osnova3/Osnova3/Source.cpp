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
	cout << "Введите:" << endl;
	cout << "1-для ввода записи" << endl;
	cout << "2-для вывода записи" << endl;
	cout << "3-для удаления" << endl;
	cout << "4-для записи информации в файл" << endl;
	cout << "5-для чтения данных из файла" << endl;
	cout << "6-для поиска информации" << endl;
	cout << "7-для выхода" << endl;
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
cout << "Ввод информации" << endl;
        if (current_size < size)
		{
			cout << "Строка номер ";
			cout << current_size + 1;
			cout << endl << "Фамилия" << endl;
			cin >> clients_of_bank[current_size].surname;
			cout << "Имя" << endl;
			cin >> clients_of_bank[current_size].name;
			cout << "Отчество" << endl;
			cin >> clients_of_bank[current_size].middleName;
			cout << "Тип счета " << endl;
			cin >> clients_of_bank[current_size].type_of_score;
			cout << "Номер счета " << endl;
			cin >> clients_of_bank[current_size].number_of_score;
			cout << "Сумма на счете " << endl;
			cin >> clients_of_bank[current_size].sum_on_score;
			cout << "Дата последнего изменения" << endl;
			cin >> clients_of_bank[current_size].lastDate;
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
		cout << "Номер выводимой строки: " << endl;   cin >> n;  cout << endl;
		cout << "Фамилия:";
		cout << clients_of_bank[n - 1].surname << endl;
		cout << "Имя:";
		cout << clients_of_bank[n - 1].name << endl;
		cout << "Отчество:";
		cout << clients_of_bank[n - 1].middleName << endl;
		cout << "Тип счета:";
		cout << clients_of_bank[n - 1].type_of_score << endl;
		cout << "Номер счета:";
		cout << clients_of_bank[n - 1].number_of_score << endl;
		cout << "Сумма на счете: ";
		cout << clients_of_bank[n - 1].sum_on_score << endl;
		cout << "Дата последнего изменения:";
		cout << clients_of_bank[n - 1].lastDate << endl;
	}
	if (sw == 2)
	{
		for (int i = 0; i < current_size; i++)
		{
			cout << "Фамилия: ";
			cout << clients_of_bank[i].surname << endl;
			cout << "Имя:";
			cout << clients_of_bank[i].name << endl;
			cout << "Отчество:";
			cout << clients_of_bank[i].middleName << endl;
			cout << "Тип счета:";
			cout << clients_of_bank[i].type_of_score << endl;
			cout << "Номер счета: ";
			cout << clients_of_bank[i].number_of_score << endl;
			cout << "Сумма на счете: ";
			cout << clients_of_bank[i].sum_on_score << endl;
			cout << "Дата последнего изменения: ";
			cout << clients_of_bank[i].lastDate << endl;
		}
	}
	cout << "Что дальше?" << endl;
	cin >> choice;
}
void del()
{
	int d;
	cout << "\nНомер строки, которую надо удалить (для удаления всех строк нажать 99)" << endl;  
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
	cout << "Что дальше?" << endl;
	cin >> choice;
}
void enter_file()
{
	int n=0;
	ofstream file1("Clients.txt");
	if (file1.fail())
	{
		cout << "\n Ошибка открытия файла";
		exit(1);
	}
	for (int p = 0; p < current_size; p++,n++)
	{
			file1 << "Фамилия:" << clients_of_bank[p].surname << "\n";
			file1 << "Имя:" << clients_of_bank[p].name << "\n";
			file1 << "Отчество:" << clients_of_bank[p].middleName << "\n";
			file1 << "Тип счета:" << clients_of_bank[p].type_of_score << "\n";
			file1 << "Номер счета:" << clients_of_bank[p].number_of_score << "\n";
			file1 << "Сумма на счете:" << clients_of_bank[p].sum_on_score << "\n";
			file1 << "Дата последенго изменения:" << clients_of_bank[p].lastDate << "\n";
	}
		file1.close();
		if (n == current_size)
		{
			cout << "Данные записаны в файл" <<endl ;
			cout << "Что дальше?" << endl;
			cin >> choice;
		}
}
void out_file()
{
	int l = 0; char str[50];
	ifstream file2("Clients.txt");
	if (file2.fail())
	{
		cout << "\n Ошибка открытия файла";
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
			cout << "Что дальше?" << endl;
			cin >> choice;
		}
	
}
void search()
{
	int number;
	cout << "Введите номер счета:" << "\n";
	cin >> number;
	for (int z = 0; z < current_size; z++)
	{
		if (number == clients_of_bank[z].number_of_score)
		{
			cout << "Фамилия: ";
			cout << clients_of_bank[z].surname << endl;
			cout << "Имя:";
			cout << clients_of_bank[z].name << endl;
			cout << "Отчество:";
			cout << clients_of_bank[z].middleName << endl;
			cout << "Тип счета:";
			cout << clients_of_bank[z].type_of_score << endl;
			cout << "Номер счета: ";
			cout << clients_of_bank[z].number_of_score << endl;
			cout << "Сумма на счете: ";
			cout << clients_of_bank[z].sum_on_score << endl;
			cout << "Дата последнего изменения: ";
			cout << clients_of_bank[z].lastDate << endl;
		}
	}
	cout << "Что дальше?" << endl;
	cin >> choice;
}
