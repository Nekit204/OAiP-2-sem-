//13 variant
#include <fstream>
#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "RUSSIAN");
	ofstream file1("File1.txt");
		ifstream file2("File1.txt");
		ofstream file3("File2.txt");
		ifstream file4("File2.txt");
		file1 << "����� ����� �������\n������� ����� ����\n����� �������� � ����������\n�����\n����� ��������\n�����\n�����\n";
		file1.close();
char str[256];
int wrd = 0;
while (!file2.eof()) {
	file2.getline(str, 256);
	wrd = 1;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == ' ') {
			wrd++;
		}
	}
	if (wrd > 1) {
		file3 << str;
		file3 << '\n';
	}
}

file2.close();
file3.close();
int max = 0, neps = 0, word = 0, answer = 0;
while (!file4.eof())
{
	file4.getline(str, 256);
	for (int l = 0;l<strlen(str); l++)
	{
		if (str[l] == '�' || str[l] == '�' || str[l] == '�' || str[l] == '�' ||
			str[l] == '�' || str[l] == '�' || str[l] == '�' || str[l] == '�' ||
			str[l] == '�' || str[l] == '�')
		
			neps++;
		
		if (str[l] ==' ') 
		{
			word++;
			if (neps > max)
			{
				max = neps;
				answer = word;
			}
			
		}
	}
}
cout << "����� � ���������� ����������� ������� ��� �������: " << answer << endl;
file4.close();
}
//{
//
//	setlocale(LC_ALL, "rus");
//	char str[50];
//	int k, i, l = 0,c=0,u=0;
//	ofstream file1("File3.txt");
//	ifstream file2("File3.txt");
//	ofstream file3("File4.txt");
//	cout << "������� ������" << endl;
//	cin.getline(str, 50);
//	file1 << str << "\n";
//	file1.close();
//	while (!file2.eof())
//	{
//	file2.getline(str, 50);
//		cout << "������ ����������� �� �����:\t" << str << endl;
//		for (i = 0; str[i] != 0; i++)
//			if (str[i] == '(' || str[i] == ')')
//			{
//				l++;
//			}
//		for (i = 0; str[i] != 0; i++)
//		if (str[i] == '[' || str[i] == ']')
//		{
//			c++;
//		}
//		for (i = 0; str[i] != 0; i++)
//		if (str[i] == '{' || str[i] == '}')
//		{
//			u++;
//		}
//	 }
//	cout << "���������� ������� ������=" << l << endl;
//	cout << "���������� ���������� ������=" << c << endl;
//	cout << "��������� �������� ������=" << u << endl;
//	file2.close();
//	file3.close();
//}