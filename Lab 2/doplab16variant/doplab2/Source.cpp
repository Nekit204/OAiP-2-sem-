//16 variant
#include <fstream>
#include <iostream>
using namespace std;
void main()
//{
//	setlocale(LC_ALL, "rus");
//	char str[256];
//	int k, j = 1, l = 1,c=0;
//	
//	ofstream file1("File1.txt");
//	ifstream file2("File1.txt");
//	ofstream file3("File2.txt");
//	ifstream file4("File2.txt");
//	file1 << "����� ����� �������\n������� ����� ��������\n������ ����� ���������\n����� ��������� ������\n�����-���������� ��������\n����� ���23����\n����\n";
//	file1.close();
//	while (!file2.eof())
//	{
//		file2.getline(str, 256);
//		if (j == 1 || j == 2 || j == 6)
//			file3 << str << "\n";
//		j++;
//		
//	}
//	file2.close();
//	file3.close();
//	while (!file4.eof())
//	{
//		file4.getline(str, 256);
//		if ( l== 3)
//		cout << str << endl;
//		l++;
//		for (int i = 0; i<strlen(str); i++)
//			if (str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9')
//			{
//				c++;
//			}
//	}
//	cout << c << endl;
//
//}
{
	setlocale(LC_ALL, "rus");
	char str[50];
	int k, i;
	ofstream file1("File3.txt");
	ifstream file2("File3.txt");
	ofstream file3("File4.txt");
	cout << "������� ������" << endl;
	cin.getline(str, 50);
	file1 << str;
	file1.close();
	while (!file2.eof())
	{
		file2.getline(str, 50);
		cout << "������ ����������� �� �����:\t" << str << endl;
		cout << "������ ����� �������� � ����\t";
		for (i = 0; str[i] != 0; i++)
			if (str[i] == '2' || str[i] == '4' || str[i] == '6' || str[i] == '8' || str[i] == '0')
				cout << str[i]<<"\t";

	}
	file2.close();
	file3.close();
}