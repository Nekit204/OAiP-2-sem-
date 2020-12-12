#include "Hash_Twin_Chain.h"
#include <iostream>
#include<fstream>
#include<tchar.h>
using namespace std;
struct AAA
{
	int key;
	int mas;
	AAA(int k, int z)
	{
		key = k;
		mas = z;
	}
	AAA()
	{
		key = 0;
		mas = 0;
	}
};
//-------------------------------
int hf(void* d)
{
	AAA* f = (AAA*)d;
	return f->key;
}
//-------------------------------
void AAA_print(listx::Element* e)
{
	std::cout << ((AAA*)e->data)->key << '-' << ((AAA*)e->data)->mas << " / ";
}
//-------------------------------
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	int current_size = 7;
	cout << "������� ������ ���-�������" << endl;
	cin >> current_size;
	hashTC::Object H = hashTC::create(current_size, hf);
	hashTC::Object H2 = hashTC::create(current_size, hf);
	int choice;
	int k;
	for (;;)
	{
		cout << "1 - ����� ���-�������" << endl;
		cout << "2 - ���������� �� �����" << endl;
		cout << "3 - �������� ��������" << endl;
		cout << "4 - ����� ��������" << endl;
		cout << "0 - �����" << endl;
		cout << "�������� �����" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0:  exit(0);
		case 2: {	 ifstream fl;
			int str;
			int k;
			fl.open("file.txt");
			while (!fl.eof())
			{

				AAA* a = new AAA;
				fl >> str;
				a->key = str;
				a->mas = str;	
				H2.insert(a);
			}
			cout << "������ ���������" << endl;
			fl.close();
		}
			  break;
		case 1:
		{
			
			H2.Scan();
		}
			break;
		case 3: {	  AAA* b = new AAA;
			cout << "������� ����" << endl;
			cin >> k;
			b->key = k;
			H2.deleteByData(b);
		}
			  break;
		case 4: AAA * c = new AAA;
			cout << "������� ����" << endl;
			cin >> k;
			c->key = k;
			if (H2.search(c) == NULL)
				cout << "������� �� ������" << endl;
			else
			{
				cout << "������ ������� � ������ ������" << endl;
				AAA_print(H2.search(c));
				cout << endl;
				
			}
			break;
		
		}
	}
	return 0;
}

