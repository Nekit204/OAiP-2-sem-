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
	cout << "\nВведите максимальный размер очереди=";  cin >> max_size;
	cout << "Введите первый элемент очереди= ";       cin >> p;
	t->info = p;        
	t->next = NULL;
	begin = end = t;
	for (;;)
	{
		cout << "Выберите команду:" << endl;
		cout << "1 - Добавление элемента в очередь" << endl;
		cout << "2 - Вывод очереди" << endl;
		cout << "3 - Поиск максимального элемента очереди" << endl;
		cout << "4 -Размер очереди " << endl;
		cout << "5 -Удаление трех элементов" << endl;
		cout << "6 - Удаление элементов очереди " << endl;
		cout << "7 - Выход" << endl;
		
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
			cout << "\nЭлементы очереди: \n";
			if (begin == NULL)   
				cout << "Нет элементов" << endl;
			else
				view(begin);
			break;
		case 3:
			maxElem(begin);
			break;
		case 4:
			if (begin == NULL)
				cout << "Нет элементов" << endl;
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
