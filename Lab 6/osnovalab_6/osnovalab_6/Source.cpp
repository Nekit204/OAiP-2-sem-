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
		cout << "Выберите команду:" << endl;
		cout << "1 - Добавление элемента в стек" << endl;
		cout << "2 - Извлечение элемента из стека" << endl;
		cout << "3 -  Очищение стека" << endl;
		cout << "4 - Вывод стека" << endl;
		cout << "5 - Данные в файл" << endl;
		cout << "6- Данные из файла" << endl;
		cout << "7- Delete" << endl;
		cout << "8 - Выход" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1: cout << "Введите элемент: " << endl;
			cin >> choice;
			push(choice, myStk);
			break;
		case 2: choice = pop(myStk);
			if (choice != -1)
				cout << "Извлеченный элемент: " << choice << endl;
			break;
		case 3: 
			clear(myStk);
			break;
		case 4:
			cout << "Весь стек: " << endl;
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
