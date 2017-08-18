// dO.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <cstdlib> // ��� system
#include <iostream>
/*!
@mainpage
\brief ��������� ������������� ��� ������ � ��������� ������������ ��������.
\details �������:
- ���� ������� �������;
- ���� ��������� �������:
-# �������;
-# � ������� ���������� ��������� �����;
- ��������� �������:
-# ����� ������������� � ������������ ��������� �������
-# ��������� ������ � ���������� ���������
-# �������� ������� � ������������ ���������
- ����� ������� �� �����.
@author ������ �������
@date 01.01.2017.
\version 1.0
@warning ��������� ����������� � ����� ���������� Visual Studio, ������� � ���������� ������ � ������ IDE �� �������������.
*/
using namespace std;
void Pe(int **Mas, int f, int t)
{
	/*!
	������� ������ �� ����� �������
	\param [in] Mas ��������� ������������ ������
	\param [in] f ���������� ����� � �������
	\param [in] t ���������� �������� � �������
	*/
	int i, g;
	system("CLS");
	printf("�� ������� ����� �����\r\n");
	for (i = 0; i < f; i++)
	{
		for (g = 0; g < t; g++)
		{
			printf("%-4d ", Mas[g][i]);
		}
		printf("\r\n");
	}
	printf("������� �� ����� ������� ����� ������� ������� � ����\r\n");
}

int **Pd(int **Mas, int* f, int* t)
{
	/*!
	������� ��������� �������:
	- ����� ������������� � ������������ ��������� �������
	- ��������� ������ � ���������� ���������
	- �������� ������� � ������������ ���������
	\param [in] Mas ��������� ������������ ������
	\param [in] f ���������� ����� � �������
	\param [in] t ���������� �������� � �������
	\param [out] Mas ��������� ������������ ������
	\return ��������� ������������ ������ ����� ���������.
	*/
	int i, g;
	system("CLS");
	printf("�� ������� ��������� �����\r\n");
	int r = *f, w = *t;
	int i1 = 0; int g1 = 0;//���������� ����������� ��������
	int i2 = 0; int g2 = 0;//���������� ����������� ��������
	for (i = 0; i < r; i++)
	{
		for (g = 0; g < w; g++)
		{
			if ((Mas[g][i] < Mas[g1][i1]) && (i != 0) && (g != 0))
			{
				i1 = i;
				g1 = g;
			}
			else if ((Mas[g][i]>Mas[g2][i2]) && (i != 0) && (g != 0))
			{
				i2 = i;
				g2 = g;
			}
		}
	}
	printf("������������ ����� [%d][%d],����������� ����� [%d][%d]", i2, g2, i1, g1);
	for (g = 0; g < r; g++)
	{
		Mas[g][i1] = 0;
	}
	for (g = g2; g < r - 1; g++)
		Mas[g] = Mas[g + 1];
	r = r - 1;
	*f = r; *t = w;
	return Mas;

}
int **Pc(int **Mas, int t)
{
	/*!
	������� ������� ����� �������� ��������� �������
	\param [in] Mas ��������� ������������ ������
	\param [in] t ������ �������
	\param [out] Mas ��������� ������������ ������
	\return ��������� ������������ ������ � ���������� ���������� ���������.

	\about ���� �������� ��������� ������� � ����������:
	\code
	for (i = 0; i < t; i++)
	{
		for (g = 0; g < t; g++)
		{
			printf("������� C[%d][%d]=", g, i);
			scanf_s("%d", &Mas[g][i]);
			printf("\r\n");
		}
	}
	\endcode
	*/
	int i, g;
	system("CLS");
	printf("�� ������� ������ �����\r\n");
	for (i = 0; i < t; i++)
	{
		for (g = 0; g < t; g++)
		{
			printf("������� C[%d][%d]=", g, i);
			scanf_s("%d", &Mas[g][i]);
			printf("\r\n");
		}
	}
	return Mas;
}
int **Pb(int **Mas, int t)
{
	/*!
	������� ��������������� ����� �������� ��������� �������
	\param [in] Mas ��������� ������������ ������
	\param [in] t ������ �������
	\param [out] Mas ��������� ������������ ������
	\return ��������� ������������ ������ � ���������� ���������� ���������.

	\about �������������� ������������ �������� ��������� �������:
	\code
	for (i = 0; i < t; i++)
	{
	for (g = 0; g < t; g++)
	{
	Mas[g][i] = rand() % 101 - 50;
	}
	}
	\endcode
	*/
	int i, g;
	system("CLS");
	printf("�� ������� ������ �����\r\n");
	for (i = 0; i < t; i++)
	{
		for (g = 0; g < t; g++)
		{
			Mas[g][i] = rand() % 101 - 50;
		}
	}

	printf("������� ������������� ������� �������� %d*%d\r\n������� �� ����� ������� ����� ������� ������� � ����\r\n", t, t);
	return Mas;
}
int **Pa(int **Mas, int* f)
{
	/*!
	������� ����� ����������� �������
	\param [in] Mas ��������� ������������ ������
	\param [in] f ������ �������
	\param [in] r ��������� �� ������ �������
	\param [out] Mas ��������� ������������ ������
	\return ������ ��������� ������������ ������ � ��� ����������� (� ������� ���������).

	\about ��������� ������ ��� ������ �������:
	\code
	Mas = new int*[r];
	for (g = 0; g < r; g++)
	{
	Mas[g] = new int[r];
	}
	\endcode

	@warning � ������ ����� r<=0 ��������� ������ ���������� � ������� ������ ������ �������� ���������� r.
	*/
	int g, r = *f;
	system("CLS");
	printf("�� ������� ������ �����.\r\n������� ������ ���������� �������\r\n");
	r = 0;
	while (r <= 0)
	{
		scanf_s("%d", &r);
		if (r <= 0)
			printf("�� ����� �� ���������. ������ ����� ���� ����� ������������� ��� 0.\r\n������� ������ ������ �������\r\n");
	}
	*f = r;
	Mas = new int*[r];
	for (g = 0; g < r; g++)
	{
		Mas[g] = new int[r];
	}
	printf("%d\r\n", r);
	return Mas;
}
void Menu()
{
	/*!
	�������� ������� ���������� �� ����
	\param n ���������� �������� � �������
	\param m ���������� ����� � �������
	\param a ���������� ������ ������ ����
	\param C ��������� ������������ ������
	@warning ��� a �� 1 �� 6 ��������� �������� ��������������� ��������
	*/
	int n = 0, m, a = 0; int **C = 0;
	while (a != 6)
	{
		printf("����:\r\n1)���� ������� ���������� �������\r\n2)�������������� ���������� �������\r\n3)���������� ������� �������\r\n4)��������� �������\r\n5)����� ������� �� ������\r\n6)����� �� ���������\r\n ��� ������ �������� ������� �� �������������� ������\r\n");
		scanf_s("%d", &a);
		switch (a)
		{
		case 1:
			C = Pa(C, &n);
			printf("2) %d\r\n", n);
			m = n;
			break;
		case 2:
			C = Pb(C, n);
			m = n;
			break;
		case 3:
			C = Pc(C, n);
			m = n;
			break;
		case 4:
			C = Pd(C, &m, &n);
			break;
		case 5:
			Pe(C, n, m);
			break;
		case 6:
			break;
		default:
			system("CLS");
			printf("�� ������� �� ������������ �����\r\n������� �� ����� ������� ����� ������� ������� � ����\r\n");
			getchar();
			getchar();
			break;
		}
	}
}



int main()
{
	/*!
	�������� ���������
	�������:
	- ������������� �������� �����
	- �����������
	- ������ ������� ����
	*/
	setlocale(LC_ALL, "Russian"); //�������� ������� �����������
	printf("����� ���������� � ��������� ��������� ������ � ���������� �������� � ��������� ������� � ������������ ���������.\r\n������� ����� ������� ����� ����������\r\n");
	Menu();
	return 0;
}
