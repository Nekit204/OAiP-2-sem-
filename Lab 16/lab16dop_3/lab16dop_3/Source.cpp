#include "Header.h"
#include <cstdlib>
int main() {
	setlocale(LC_ALL, "ru");
	int choice;
	unordered_map <string, string> m;
	fillTable(m);
	do {
		cout << "\n1 - ����� ���� �������� ����" << endl;
		cout << "2 - ����� ��������� �����" << endl;
		cout << "3 - �������� ��������� ��� ��������� ����� ��� �������� �����" << endl;
		cout << "0 - �����" << endl;
		cin >> choice;
		switch (choice) {
		case 1: print(m); break;
		case 2: {
			string c;
			cout << "\n������� �������� �����: ";
			cin >> c;
			findEl(m, c); break;
		}
		case 3: {
			string help;
			cout << "\n������� ���������: ";
			cin >> help;
			string keyWord;
			cout << "\n����� �������� ����� ��������?  ";
			cin >> keyWord;
			changeHelp(m, help, keyWord);
		}
		case 0: break;
		}
	} while (choice);
}