// matrix_replacement.cpp: определяет точку входа для консольного приложения.
Задание:Произвести замену двух произвольных  столбцов в матрице. Номера заменяемых столбцов вводит пользователь
#include "stdafx.h"
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int b, c, n; // b,c - номера заменяемых столбцов, n - временная переменная, для замены
	int a[10][10]; // инициализируем массив
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			a[i][j] = 5 + rand() % 45; // заполнение матрицы рандомными числами
			cout << setw(4) << a[i][j];// вывод матрицы
		}

		cout << endl;
	}

	cout << "Введите номера столбцов, которые необходимо поменять местами" << endl;
	cin >> b; 
	cin >> c;

	for (int i = 0; i < 10; i++) // Производим замену инициализируя пробежку по строкам. 
	{
		n = a[i][b - 1];
		a[i][b - 1] = a[i][c - 1];
		a[i][c - 1] = n;
	}

	cout << "Новая матрица " << endl;

	for (int i = 0; i < 10; i++) // Выводим получившуюся матрицу
	{
		for (int j = 0; j < 10; j++)
		{

			cout << setw(4) << a[i][j];
		}

		cout << endl;
	}

	system("pause");
	return 0;
}
