#include <stdio.h>
#include<iostream>
#include<ctime>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	FILE* A, * B, * C, * D; int rmin = 1, rmax = 20;
	errno_t err; int i;
	int a[10], b[10], c[10], d[10];
	srand((unsigned)time(0));
	err = fopen_s(&A, "NameA.txt", "w");
	if (err != 0)
	{
		perror("���������� ������� ����\n");
		return EXIT_FAILURE;
	}
	for (i = 0; i < 10; i++)
	{
		a[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmax - rmin) + rmin);
		fprintf(A, "%d, ", a[i]);
	}

	err = fopen_s(&B, "NameB.txt", "w");
	if (err != 0)
	{
		perror("���������� ������� ����\n");
		return EXIT_FAILURE;
	}
	for (i = 0; i < 10; i++)
	{
		b[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmax - rmin) + rmin);
		fprintf(B, "%d, ", b[i]);
	}

	err = fopen_s(&C, "NameC.txt", "w");
	if (err != 0)
	{
		perror("���������� ������� ����\n");
		return EXIT_FAILURE;
	}
	for (i = 0; i < 10; i++)
	{
		c[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmax - rmin) + rmin);
		fprintf(C, "%d, ", c[i]);
	}


	err = fopen_s(&D, "NameD.txt", "w");
	if (err != 0)
	{
		perror("���������� ������� ����\n");
		return EXIT_FAILURE;
	}
	for (i = 0; i < 10; i++)
	{
	if (a[i] > b[i]&&a[i]>c[i])

	fprintf(D, "%d,", a[i]);
else if (b[i] > a[i] && b[i] > c[i])
fprintf(D, "%d,", b[i]);
			else if (c[i] > a[i] &&c[i] > b[i])
			fprintf(D, "%d,", c[i]);
	}
fclose(A);
fclose(B);
fclose(C);
fclose(D);
return 0; 
}
//int main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	FILE* A, * B, * C, * D; int rmin = 1, rmax = 20;
//	errno_t err; int i;
//	int a[10], b[10], c[10], d[30];
//	srand((unsigned)time(0));
//	err = fopen_s(&A, "A.txt", "w");
//	if (err != 0)
//	{
//		perror("���������� ������� ����\n");
//		return EXIT_FAILURE;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		a[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmax - rmin) + rmin);
//		
//		fprintf(A, "%d, ", a[i]);
//	}
//
//	err = fopen_s(&B, "B.txt", "w");
//	if (err != 0)
//	{
//		perror("���������� ������� ����\n");
//		return EXIT_FAILURE;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		b[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmax - rmin) + rmin);
//		
//		fprintf(B, "%d, ", b[i]);
//	}
//
//	err = fopen_s(&C, "C.txt", "w");
//	if (err != 0)
//	{
//		perror("���������� ������� ����\n");
//		return EXIT_FAILURE;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		c[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmax - rmin) + rmin);
//		
//		fprintf(C, "%d, ", c[i]);
//	}
//	err = fopen_s(&D, "D.txt", "w");
//	if (err != 0)
//	{
//		perror("���������� ������� ����\n");
//		return EXIT_FAILURE;
//	}
//	for (i = 1; i <= 30; i++)
//	{
//		fprintf(D, "%d,", a[i]);
//		fprintf(D, "%d,", b[i]);
//		fprintf(D, "%d,", c[i]);
//	}
//	fclose(A);
//	fclose(B);
//	fclose(C);
//	fclose(D);
//}