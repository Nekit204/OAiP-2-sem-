#include<iostream>
#include<stdio.h>
#include<ctime>
//int main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	FILE* f, * f1, * f2, * f4; int rmin = 1, rmax = 20;
//	errno_t err; int i;
//	int a[10], b[10], c[10], d[30];
//	srand((unsigned)time(0));
//	err = fopen_s(&f, "NameA.txt", "w");
//	if (err != 0)
//	{
//		perror("Невозможно создать файл\n");
//		return EXIT_FAILURE;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		a[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmax - rmin) + rmin);
//		std::cout << a[i] << std::endl;
//		fprintf(f, "%d, ", a[i]);
//	}
//	
//	err = fopen_s(&f1, "NameB.txt", "w");
//	if (err != 0)
//	{
//		perror("Невозможно создать файл\n");
//		return EXIT_FAILURE;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		b[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmax - rmin) + rmin);
//		std::cout << b[i] << std::endl;
//		fprintf(f1, "%d, ", b[i]);
//	}
//	
//	err = fopen_s(&f2, "NameC.txt", "w");
//	if (err != 0)
//	{
//		perror("Невозможно создать файл\n");
//		return EXIT_FAILURE;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		c[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmax - rmin) + rmin);
//		std::cout << c[i] << std::endl;
//		fprintf(f2, "%d, ", c[i]);
//	}
//	
//
//	err = fopen_s(&f4, "NameD.txt", "w");
//	if (err != 0)
//	{
//		perror("Невозможно создать файл\n");
//		return EXIT_FAILURE;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(f4, "%d,", a[i]);
//		fprintf(f4, "%d,", b[i]);
//		fprintf(f4, "%d,", c[i]);
//	}
//	fclose(f);
//	fclose(f1);
//	fclose(f2);
//	fclose(f4);
//}
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int sum;
	float ans;

	cin >> sum;
	if (sum == 3)
	{
		ans = 3.0 / 3.0 * 100;
		cout << "Общая успеваемосоть равна=" << ans << "%" << "\n";
	}
	else if (sum == 2)
	{
		ans = 2.0 / 3.0 * 100;
		cout << "Общая успеваемосоть равна=" << ans << "%" << "\n";
	}
	else if (sum == 1)
	{
		ans = 1.0 / 3.0 * 100;
		cout << "Общая успеваемосоть равна=" << ans << "%" << "\n";
	}
	else if (sum == 0)
	{
		ans = 0 / 3 * 100;
		cout << "Общая успеваемосоть равна=" << ans << "%" << "\n";
	}
}
