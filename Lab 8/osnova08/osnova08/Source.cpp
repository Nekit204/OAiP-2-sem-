#include <iostream>
#include <fstream>
using namespace std;
const unsigned int NAME_SIZE = 30;
const unsigned int CITY_SIZE = 20;

struct Address
{
	char name[NAME_SIZE];
	char city[CITY_SIZE];
	Address* next;
	Address* prev;
};
//-----------------------------------------------------------
void insert(Address* e, Address** phead, Address** plast) //���������� � ����� ������
{
	Address* p = *plast;
	if (*plast == NULL)
	{
		e->next = NULL;
		e->prev = NULL;
		*plast = e;
		*phead = e;
		return;
	}
	else
	{
		p->next = e;
		e->next = NULL;
		e->prev = p;
		*plast = e;
	}
}
//-----------------------------------------------------------
Address* setElement()      // �������� �������� � ���� ��� �������� � ���������� 
{
	Address* temp = new  Address();
	if (!temp)
	{
		cerr << "������ ��������� ������ ������";
		return NULL;
	}
	cout << "������� ���: ";
	cin >> temp->name;
	cout << "������� �����: ";
	cin >> temp->city;
	temp->next = NULL;
	temp->prev = NULL;
	return temp;
}
//-----------------------------------------------------------
void outputList(Address** phead, Address** plast)      //����� ������ �� �����
{
	Address* t = *phead;
	while (t)
	{
		cout << t->name << ' ' << t->city << endl;
		t = t->next;
	}
	cout << "" << endl;
}
//-----------------------------------------------------------
void find(char name[NAME_SIZE], Address** phead)    // ����� ����� � ������
{
	Address* t = *phead;
	while (t)
	{
		if (!strcmp(name, t->name)) break;
		t = t->next;
	}
	if (!t)
		cerr << "��� �� �������" << endl;
	else
		cout << t->name << ' ' << t->city << endl;
}
//-----------------------------------------------------------
void delet(char name[NAME_SIZE], Address** phead, Address** plast)// �������� �������� �� �����
{
struct Address* t = *phead;
while (t)
{
	if (!strcmp(name, t->name))  break;
	t = t->next;
}
if (!t)
cerr << "��� �� �������" << endl;
else
{
	if (*phead == t)
	{
		*phead = t->next;
		if (*phead)
			(*phead)->prev = NULL;
		else
			*plast = NULL;
	}
	else
	{
		t->prev->next = t->next;
		if (t != *plast)
			t->next->prev = t->prev;
		else
			*plast = t->prev;
	}
	delete t;
	cout << "������� ������" << endl;
}
}
//-----------------------------------------------------------
void writeToFile(Address** phead)       //������ � ����
{
	struct Address* t = *phead;
	ofstream file1("Lip.txt");
	if (file1.fail())
	{
		cerr << "���� �� �����������" << endl;
		exit(1);
	}
	cout << "���������� � ����" << endl;
	while (t)
	{
		file1 << t->name << " " << t->city << endl;
		t = t->next;
	}
	file1.close();
}
//---------------------------------------------------------------
void fromFile(Address** phead)
{

	char buf[256];
	ifstream file2("Lip.txt");
	if (file2.fail())
	{
		cout << "\n ������ �������� �����";
		exit(1);
	}
	while (!file2.eof())
	{
		file2.getline(buf, 256);
		if (strlen(buf))
			cout << " "  << buf;
		cout << endl;
	}

	file2.close();
}
void delm(Address** phead, Address** plast,int m)
{
	
	 Address* t=*phead;

	while(t)
	{
		if ((m++) % 2 == 0)
		{
			if (*phead == t)
			{
				*phead = t->next;
				if (*phead)
					(*phead)->prev = NULL;
				else
					*plast = NULL;
			}
			else
			{
				t->prev->next = t->next;
				if (t != *plast)
					t->next->prev = t->prev;
				else
					*plast = t->prev;
			}
			delete t;
			return;
		}
		
			t = t->next;
		
		
	}
}
int main()
{
	Address* head = NULL;
	Address* last = NULL;
	setlocale(LC_CTYPE, "Rus");
	int choice;
	char s[80];  int c;
	cout << endl;
	cout << "1. ���� ������" << endl;
	cout << "2. �������� �����" << endl;
	cout << "3. ����� �� �����" << endl;
	cout << "4. �����" << endl;
	cout << "5. � ����" << endl;
	cout << "6. �� �����" << endl;
	cout << "7. ������� ������� m ��������" << endl;
	cout << "8. �����" << endl;
	cout << endl;
	 for(;;)
	{
		 cout << "��� �����: ";
		 cin >> choice;
		switch (choice)
		{
		case 1:  insert(setElement(), &head, &last);
			break;
		case 2: {	  char dname[NAME_SIZE];
			cout << "������� ���: ";
			cin >> dname;
			delet(dname, &head, &last);
		}
			  break;
		case 3:  outputList(&head, &last);
			break;
		case 4: {	  char fname[NAME_SIZE];
			cout << "������� ���: ";
			cin >> fname;
			find(fname, &head);
		}
			  break;
		case 5: {
			writeToFile( &head);
		}
			  break;
		case 6: {
			fromFile(&head);
		}
			  break;
		case 7: {
			int m = 1;
			delm(&head,&last,m);
		}
			  break;
		case 8:  exit(0);
		default: exit(1);
		}
	}
	return 0;
}

