#include <iostream>
struct Stack
{
	char data;             
	Stack* head;		 
	Stack* next;		
};
using namespace std;
void push(char x, Stack* myStk)   
{
	Stack* e = new Stack;    
	e->data = x;             
	e->next = myStk->head;   
	myStk->head = e;         
}
void show(Stack* myStk)   
{
	Stack* e = myStk->head;   
	char a,c,b,d,f,g;
	if (e == NULL)
		cout << "���� ����!" << endl;
		for (int z = 0; z < 1; z++)
		{
			    a = e->data;//t
				e = e->next;
				b = e->data;//e
				e = e->next;
				c = e->data;//v
				e= e->next;
				d = e->data;//i
				e = e->next;
				f = e->data;//r
				e = e->next;
				g = e->data;//p
				e = e->next;
				cout <<d<<f<<g<<a<<b<<c;
		}
	cout << endl;
}
int main()
{
	setlocale(LC_ALL, "Rus");
	int choice; char el;
	Stack* myStk = new Stack; 
	myStk->head = NULL;       
	for (;;)
	{
		cout << "�������� �������:" << endl;
		cout << "1 - ���������� �������� � ����" << endl;
		cout << "2 - ����� �����" << endl;
		cout << "3 - �����" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1: cout << "������� �������: " << endl;
			cin >> el;
			push(el, myStk);
			break;
		case 2: cout << "���� ����: " << endl;
			show(myStk);
			break;
		case 3: return 0;
			break;
		}
	}
	return 0;
}



