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
	cout << "2. ������� �������" << endl;
	cout << "3. ������� �������" << endl;
	cout << "4. ������ ������" << endl;
	cout << "5. ����� ������" << endl;
	cout << "6. 1 ����" << endl;
	cout << "7. 2 ����" << endl;
	cout << "8. 3 ����" << endl;
	cout << "9. 4 ����" << endl;
	cout << "10. �����" << endl;
	cout << endl;
	for (;;)
	{
		cout << "��� �����: ";
		cin >> choice;
		switch (choice)
		{
		case 1:  insert(setElement(), &head, &last);
			break;
		case 2:  studentOld(&head, &last);
			break;
		case 3: 	studentYoung(&head, &last); 
			break;
		case 4: average(&head, &last);
			break;
		case 5: outputList(&head, &last); 
			break;
		case 6: outputFirstCourse(&head, &last);
			break;
		case 7:
			outputSecondCourse(&head, &last); 
			 break;
		case 8:
			outputThirdCourse(&head, &last);
			break;
		case 9:
			outputFourthCourse(&head, &last);
			break;
		case 10:  exit(0);
		default: exit(1);
		}
	}
	return 0;
}