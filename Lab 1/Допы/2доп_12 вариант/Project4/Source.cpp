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
	std::cout << "Матрица:" << std::endl;
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
	for (i = k; i <= k; i++)
	{
		for (j = 1; j <= 3; j++)
		{

			
			fprintf(f2, "%d\t ", A[i][j]);

		}

	}
	fclose(f);
	fclose(f2);
}

//{
//	setlocale(LC_CTYPE, "Russian");
//		FILE* A, * B, * C, * D; int rmin = 1, rmax = 20;
//		errno_t err; int i;
//		int a[10], b[10], c[10], d[10];
//		srand((unsigned)time(0));
//		err = fopen_s(&A, "NameA.txt", "w");
//		if (err != 0)
//		{
//			perror("Невозможно создать файл\n");
//			return EXIT_FAILURE;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			a[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmax - rmin) + rmin);
//			
//			fprintf(A, "%d, ", a[i]);
//		}
//	
//		err = fopen_s(&B, "NameB.txt", "w");
//		if (err != 0)
//		{
//			perror("Невозможно создать файл\n");
//			return EXIT_FAILURE;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			b[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmax - rmin) + rmin);
//			
//			fprintf(B, "%d, ", b[i]);
//		}
//	
//		err = fopen_s(&C, "NameC.txt", "w");
//		if (err != 0)
//		{
//			perror("Невозможно создать файл\n");
//			return EXIT_FAILURE;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			c[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmax - rmin) + rmin);
//			
//			fprintf(C, "%d, ", c[i]);
//		}
//	
//	
//		err = fopen_s(&D, "NameD.txt", "w");
//		if (err != 0)
//		{
//			perror("Невозможно создать файл\n");
//			return EXIT_FAILURE;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			if (a[i] < b[i]&&a[i]<c[i])
//				
//					fprintf(D, "%d,", a[i]);
//				else if(b[i]<a[i]&&b[i]<c[i])
//					fprintf(D, "%d,", b[i]);
//			else if(c[i]<a[i]&&c[i]<a[i])
//				fprintf(D, "%d,", c[i]);
//			
//		}
//	fclose(A);
//	fclose(B);
//	fclose(C);
//	fclose(D);
//	return 0; 
//}