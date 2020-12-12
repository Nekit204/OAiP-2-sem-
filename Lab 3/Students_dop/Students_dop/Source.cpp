#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
struct Student
{
	char surName[256];
	char Name[256];
	char MiddleName[256];
	char exams[5];
	int marks[5];
};
int main()
{
	setlocale(LC_CTYPE, "Russian");
	const int size = 3;
	Student a[size];
	for (int i =0; i < size; i++)
	{
		cout << "Введите фамилию: \n";
		cin >> a[i].surName;
		cout << "Введите имя: \n";
		cin >> a[i].Name;
		cout << "Введите отчество: \n";
		cin >> a[i].MiddleName;
		cout << "Введите оценки: \n";
		cout << "Математика ; ОАиП ; КЯР ; ЯП ; Английский язык \n";
		for (int j = 0; j < 5; j++)
		{
         cin >> a[i].marks[j];
		}

	}
	int z = 0, l = 0, c = 0;
	float ans;
	int k = 0, m = 0, v = 0;
	int sum;
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (a[i].marks[j] == 4 || a[i].marks[j] == 5)
			{
				z++;
			}

		}
	}
	for (int i = 1; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (a[i].marks[j] == 4 || a[i].marks[j] == 5)
			{
				l++;
			}

		}
	}
	for (int i = 2; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (a[i].marks[j] == 4 || a[i].marks[j] == 5)
			{
				c++;
			}

		}
	}
	if (z % 5 == 0)
	{
		cout << "\n";
		cout << "На 4 и 5 сдал экзамены:" << a[0].surName << "\n";
		k++;
	}
	if (l % 5 == 0)
	{
		cout << "На 4 и 5 сдал экзамены:" << a[1].surName << "\n";
		v++;
	}
	if (c % 5 == 0)
	{
		cout << "На 4 и 5 сдал экзамены:" << a[2].surName << "\n";
		m++;
	}
	sum = k + m + v;
	if (sum == 3)
	{
		ans = 3.0/3.0*100 ;
		cout << "Общая успеваемосоть равна=" << ans << "%" << "\n";
	}
	 else if (sum == 2)
	{
		ans = 2.0/3.0*100 ;
		cout << "Общая успеваемосоть равна=" << ans << "%" << "\n";
	}
	 else if (sum == 1)
	{
		ans = 1.0/3.0*100;
		cout << "Общая успеваемосоть равна=" << ans << "%" << "\n";
	}
	 else if (sum == 0)
	{
		ans = 0/3*100;
		cout << "Общая успеваемосоть равна=" << ans << "%" << "\n";
	}
}