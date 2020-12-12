#include <fstream>
#include <iostream>
using namespace std;
void main()
//{
//	setlocale(LC_ALL, "rus");
//	char str[256];
//	int k,j=1,l=1;
//	ofstream file1("File1.txt");
//	ifstream file2("File1.txt");
//	ofstream file3("File2.txt");
//	ifstream file4("File2.txt");
//	file1 << "Жизнь очень хорошая\nкартина очень красивая\nпогода такая пасмурная\nптицы прилетают весной\nЛеший-мифическое чудовище\nолень\nлань\n";
//	file1.close();
//	cout << "Введите k от 1 до 7" << endl;
//	cin >> k;
//	while (!file2.eof()) 
//	{
//		file2.getline(str, 256);
//		if (j >= k && j <= k + 3)
//		file3 << str << "\n";
//			j++;
//		
//	}
//	file2.close();
//	file3.close();
//	while (!file4.eof())
//	{
//		file4.getline(str, 256);
//		cout << str << endl;
//		for (int i = 0; str[i]!=0; i++)
//		{
//			if (str[i] == 'a' || str[i] == 'е' || str[i] == 'у' || str[i] == 'ё' || str[i] == 'я' || str[i] == 'и' || str[i] == 'ю' || str[i] == 'о' || str[i] == 'э' || str[i] == 'ы')
//				l++;
//		}
//		
//	}
//	cout <<"Колчество гласных в строках равно="<< l << endl;
//	file4.close();	
//}
{setlocale(LC_ALL, "rus");
		char str[50];
		int k, i;
		ofstream file1("File3.txt");
		ifstream file2("File3.txt");
		ofstream file3("File4.txt");
		cout<<"Введите строку"<<endl;
		cin.getline(str, 50);
		file1 << str;
		file1.close();
		while (!file2.eof())
		{
			file2.getline(str, 50);
			cout<<"Строка прочитанная из файла:\t" << str << endl;
			cout << "Только cлова записаны в файл.\t";
			for (i = 0; i < strlen(str); i++)
			{
				if (str[i] != '1' && str[i] != '2' && str[i] != '3' && str[i] != '4' && str[i] != '5' && str[i] != '6' && str[i] != '7' && str[i] != '8' && str[i] != '9')

					file3 << str[i];
			}
		}
		file2.close();
		file3.close();
		
}