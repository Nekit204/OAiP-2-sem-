#include <ctime>             
#include <stdlib.h>
#include <iostream>
using namespace std;
int* sort2(int m[], int lm)
{
	int buf;
	bool sort;
	for (int g = lm / 2; g > 0; g /= 2)
		do
		{
			sort = false;
			for (int i = 0, j = g; j < lm; i++, j++)
				if (m[i] > m[j])
				{
					sort = true;
					buf = m[i];
					m[i] = m[j];
					m[j] = buf;
				}
		} while (sort);
		return m;
}
int getHoarBorder(int A[], int sm, int em)
{
	int i = sm - 1, j = em + 1;
	int brd = A[sm];
	int buf;
	while (i < j)
	{
		while (A[--j] > brd);
		while (A[++i] < brd);
		if (i < j)
		{
			buf = A[j];
			A[j] = A[i];
			A[i] = buf;
		};
	}
	return j;
}
int* sortHoar(int A[], int sm, int em)
{
	if (sm < em)
	{
		int hb = getHoarBorder(A, sm, em);
		sortHoar(A, sm, hb);
		sortHoar(A, hb + 1, em);
	}
	return A;
};

int getHoarBorder2(int A[], int sm, int em)
{
	int i = sm - 1, j = em + 1;
	int brd = A[sm];
	int buf;
	while (i < j)
	{
		while (A[--j] < brd);
		while (A[++i] > brd);
		if (i < j)
		{
			buf = A[j];
			A[j] = A[i];
			A[i] = buf;
		};
	}
	return j;
}
int* sortHoar2(int A[], int sm, int em)
{
	if (sm < em)
	{
		int hb = getHoarBorder2(A, sm, em);
		sortHoar2(A, sm, hb);
		sortHoar2(A, hb + 1, em);
	}
	return A;
};

int getRandKey(int reg = 0)
{
	if (reg > 0)
		srand((unsigned)time(NULL));
	int rmin = 0;
	int rmax = 2000;
	return (int)(((double)rand() / (double)RAND_MAX) * (rmax - rmin) + rmin);
}
int getRandKey2(int reg = 0)
{
	if (reg > 0)
		srand((unsigned)time(NULL));
	int rmin = -5;
	int rmax = 5;
	return (int)(((double)rand() / (double)RAND_MAX) * (rmax - rmin) + rmin);
}
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int size;
	cout << "������� ������ �������:";
	cin >> size;
	int arr[256];
	int a[10];
	cout << "--------------------1 dop-------------------" << endl;
	cout << "������:"<<"\t";
	for (int d = 0; d < size; d++)
	{
		arr[d] = getRandKey(0);
		cout << arr[d] << "\t";
	}
	cout << endl;
	sort2(arr, size);
	cout << "������������� ������:"<<"\t";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "����������� �������:" << arr[0] << endl;
	cout << "������:" << 0 << endl;
	cout << "������������ �������:" << arr[size - 1] << endl;
	cout << "������:" << size-1 << endl;
	cout << "--------------------2 dop-------------------" << endl;
	cout << "������:" << "\t";
	for (int d = 0; d < 10; d++)
	{
		a[d] = getRandKey(0);
		cout << a[d] << "\t";
	}
	cout << endl;
	sortHoar2(a,0,3);
	sortHoar(a, 6, 9);
	cout << "������������� ������:" << "\t";
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl;
	cout << "--------------------3 dop-------------------" << endl;
	cout << "������:" << "\t";
	int size2 = 15;
	int mas[15];
	for (int i = 0; i < size2; i++)
	{
		mas[i] = getRandKey2(0);
		cout << mas[i] << "\t";
	}
	sortHoar(mas, 0, size2 - 1);
	cout << endl;
	cout << "������������� ������:" << "\t";
	for (int i = 0; i < size2; i++)
	{
		cout << mas[i] << "\t";
	}
	cout << endl;
	cout << "���������� ������:";
	for (int i = 0; i < size2 - 1; i++)
		for (int j = i + 1; j < size2; j++)
			if (mas[i] == mas[j])
			{
				for (int k = j; k < size2; k++)
				mas[k] = mas[k + 1];
				size2--;
				j--;
			}

	for (int i = 0; i < size2; i++)
		cout << mas[i] << " ";
	cout << endl;
	return 0;

}
