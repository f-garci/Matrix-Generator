#include <iostream>
#include "Matrix.h"

int main()
{
	Matrix M(4);

	M.add(2, 3);
	M.subtract(3, 1);

	std::cout << M;

	return 0;
}