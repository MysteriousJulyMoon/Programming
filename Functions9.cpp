#include "Functionss.hpp"
#include <iostream>
using namespace std;
namespace mt
{
	void Read(int matrix[Columns][Columns], int& n, int& m)

	{
		cin >> n >> m;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> matrix[i][j];
	}

	void Write(int matrix[Columns][Columns], int n, int m)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
				cout << matrix[i][j] << " ";
			cout << endl;

		}
	}

	void replaceMaxElements(int matrix[Columns][Columns], int n, int m, int maxPrime)
	{
		for (int col = 0; col < m; col++) {
			int minElement = INT_MAX;
			for (int row = 0; row < n; row++) {
				if (matrix[row][col] < minElement)
					minElement = matrix[row][col];
			}

			for (int row = 0; row < n; row++) {
				if (matrix[row][col] == minElement)
					matrix[row][col] = maxPrime;
			}
		}
	}

	bool isEqualRowExists(int matrix[Columns][Columns], int n, int m)
	{
		for (int i = 0; i < n; i++)
			for (int j = i + 1; j < n; j++)
			{
				bool flag = true;
				for (int k = 0; k < m; k++)
					if (matrix[i][k] != matrix[j][k])  //Строки не равны 
					{
						flag = false;
						break;
					}
				if (flag)     //Нашлись одинаковые строки
					return true;
			}
		return false;
	}

	bool isPrime(int x)   //Поиск/проверка простого числа
	{
		if (x < 2)
			return false;
		for (int d = 2; d <= sqrt(x); d++)
			if (x % d == 0)
				return false;
		return true;
	}

	int findMaxPrime(int matrix[Columns][Columns], int n, int m)   //Нахождение максимального простого числа
	{
		int maxPrime = INT_MIN;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				if (isPrime(matrix[i][j]) && maxPrime < matrix[i][j])
				{
					maxPrime = matrix[i][j];
				}
		return maxPrime;
	}
}

