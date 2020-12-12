#include <stdio.h>
#include <iostream>
#include <ctime>
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
	for (i = 1; i <= 3; ++i)
	{
		int t;

		for (j = i; j <= 3; ++j)
		{
			t = A[i][j];
			A[i][j] = A[j][i];
			A[j][i] = t;

		}

	}
	err = fopen_s(&f2, "matr2.txt", "w");
	if (err != 0)
	{
		perror("Невозможно создать файл\n");
		return EXIT_FAILURE;
	}
	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= 3; j++)
		{

			
			fprintf(f2, "%d\t ", A[i][j]);

		}
		
	}
	printf("Транспонированная матрица matr2.txt\n");
	fclose(f);
	fclose(f2);
}
