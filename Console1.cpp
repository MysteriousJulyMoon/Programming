#include "Functionss.hpp"
using namespace mt;

	int main()
	{
		int n, m;        //Определение переменных
		int matrix[Columns][Columns];

		Read(matrix, n, m);    //Ввод

		//Проверка на одинаковость строк
		if (isEqualRowExists(matrix, n, m))
		{
			int maxPrime = findMaxPrime(matrix, n, m);
			replaceMaxElements(matrix, n, m, maxPrime);
		}

		Write(matrix, n, m);
		return 0;

	}
