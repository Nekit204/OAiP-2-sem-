//12 variant
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
//	file1 << "Жизнь очень хорошая\nкартина очень красивая\nжизнь такая пасмурная\nптицы прилетают весной\nЛеший-мифическое чудовище\nочень кра23сиво\nжизнь\n";
//	file1.close();
//	while (!file2.eof())
//	{
//		file2.getline(str, 256);
//		if (j == 1 || j == 3 || j == 7)
//			file3 << str << "\n";
//		j++;
//		
//	}
//	file2.close();
//	file3.close();
//	while (!file4.eof())
//	{
//		file4.getline(str, 256);
//		
//		if (l == 3)
//		{
//			cout << "Псоледняя строка:"<< str << endl;
//			for (int i = 0; i < strlen(str); i++)
//			{
//				if (str[i] != 'и'&& str[i] != 'у'&&str[i] != 'ё' && str[i] != 'а'&&str[i] != 'я' && str[i] != 'э'&&str[i] != 'ы' && str[i] != 'о'&&str[i] != 'е' && str[i] != 'ю')
//				{
//					c++;
//				}
//			}
//		}
//		l++;
//		
//		
//		
//	}
//	cout << "Количество согласных в последней строке="<< c << endl;
//}
{
	setlocale(LC_ALL, "rus");
	char str[50];
	int k, i,l=0;
	ofstream file1("File3.txt");
	ifstream file2("File3.txt");
	ofstream file3("File4.txt");
	cout << "Введите строку" << endl;
	cin.getline(str, 50);
	file1 << str;
	file1.close();
	while (!file2.eof())
	{
		file2.getline(str, 50);
		cout << "Строка прочитанная из файла:\t" << str << endl;
		cout << "Количество запятых=";
		for (i = 0; str[i] != 0; i++)
			if (str[i] == ',')
				l++;

	}
	cout << l << endl;
	file2.close();
	file3.close();
}