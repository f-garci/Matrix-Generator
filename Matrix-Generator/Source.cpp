#include <iostream>
#include "Matrix.h"

int main()
{
	Matrix M({ {1,2,3,4}, {5,6,7,8}, {9,0,1,2},{3,4,5,6} });

	M.add(2, 3);
	M.subtract(3, 1);
	M.multiply(-1.0/2, 1);

	std::cout << M;

	return 0;
}