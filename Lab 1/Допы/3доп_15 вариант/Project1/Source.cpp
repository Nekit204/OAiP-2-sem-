#include <stdio.h>
#include<iostream>
#include<ctime>
//int main()
//{
//	setlocale(LC_ALL, "");
//	int i; int c[10] = { 1111,1245,4563,8931,9871,1067,1234,2345,12345,1789 };
//	FILE* F1; errno_t err;
//	 err=fopen_s(&F1,"F1.txt", "w");
//	 if (err != 0)
//	 {
//		 perror("Невозможно создать файл\n");
//		 return EXIT_FAILURE;
//	 }
//	for (i = 1; i <= 9; i++) {
//		
//		fprintf(F1, "%d\n", c[i]);
//	}
//	int k;
//	std::cout<< "Введите k"<<std::endl;
//	std::cin >> k;
//	FILE* F2;
//	err= fopen_s(&F2,"F2.txt", "w");
//	
//	for (i = k+3; i <= 9; i++)
//	{
//		fprintf(F2, "%d\n", c[i]);
//	}
//fclose(F1); 
//fclose(F2);
//	return 0;
//}
int main()
{
	setlocale(LC_ALL, "");
	int  i = 1, j = 1; errno_t err; int rmin = 1, rmax = 10; int a;
	int** A;
	FILE* f, * f2;
	srand((unsigned)time(0));
	A = new int* [3];
	err = fopen_s(&f, "matr1.txt", "w");
	if (err != 0)
	{
		perror("Невозможно создать файл\n");
		return EXIT_FAILURE;
	}
	for (i = 1; i <= 3; i++)
	{
		A[i] = new int[3];
		for (j = 1; j <= 3; j++)
		{
			A[i][j] = (int)(((double)rand() / (double)RAND_MAX) * (rmax - rmin) + rmin);
			A[1][1] = 3;
			
			fprintf(f, "%d\t ", A[i][j]);
		}

	}
	printf("Данные записаны в файл matr1.txt\n");
	int k;
	std::cout << "Введите к от 1 до 3" << std::endl;
	std::cin >> k;
	err = fopen_s(&f2, "matr2.txt", "w");
	if (err != 0)
	{
		perror("Невозможно создать файл\n");
		return EXIT_FAILURE;
	}
	if(k==1)
	for (i = 1; i <= 3; i++)
	{
		for (j = k; j <= 1; j++)
		{

			
			fprintf(f2, "%d\t ", A[i][j]);

		}

	}
	if (k == 2)
		for (i = 1; i <= 3; i++)
		{
			for (j = k; j <= 2; j++)
			{


				fprintf(f2, "%d\t ", A[i][j]);

			}

		}
	if (k == 3)
		for (i = 1; i <= 3; i++)
		{
			for (j = k; j <= 3; j++)
			{


				fprintf(f2, "%d\t ", A[i][j]);

			}

		}
	fclose(f);
	fclose(f2);
}