#define Columns 100
#pragma once

namespace mt
{
	    void Read(int matrix[Columns][Columns], int& n, int& m);

		void Write(int matrix[Columns][Columns], int n, int m);

		void replaceMaxElements(int matrix[Columns][Columns], int n, int m, int maxPrime);

		bool isEqualRowExists(int matrix[Columns][Columns], int n, int m);

		bool isPrime(int x);

}
