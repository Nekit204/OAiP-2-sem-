#include<iostream>
#include"List.h"
int main()
{
	Address* head = NULL;
	Address* last = NULL;
	setlocale(LC_CTYPE, "Rus");
	int choice;
	char s[80];  int c;
	cout << endl;
	cout << "1. ���� ��������" << endl;
	cout << "2. ����� �� �����" << endl;
	cout << "3. �����" << endl;
	cout << "4. ���������� ���������" << endl;
	cout << "5. �������� ������" << endl;
	cout << "6. �����" << endl;
	cout << endl;
	for (;;)
	{
		cout << "��� �����: ";
		cin >> choice;
		switch (choice)
		{
		case 1:  insert(setElement(), &head, &last);
			break;
		case 2:  outputList(&head, &last);
			break;
		case 3: {	  char fnumber[NAME_SIZE];
			cout << "������� �����: ";
			cin >> fnumber;
			find(fnumber, &head);
		}
			  break;
		case 4: {
		
			countList(&head, &last);
		}
			  break;
		case 5: {
			delAll(&head, &last);
		}
			  break;
		case 6:  exit(0);
		default: exit(1);
		}
	}
	return 0;
}

