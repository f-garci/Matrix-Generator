#include "Matrix.h"
#include <cmath>

Matrix::Matrix(int dim)
{
	dimensions = dim;
	for (int i = 0; i < pow(dim, 2); i++) {
		nums.push_back(0);
	}
}

std::ostream& operator<<(std::ostream& os, const Matrix& m)
{
	for (int i = 0; i < m.nums.size(); i++) 
	{
		if (i != 0 && (i + 1) % m.dimensions == 0) 
		{
			os << m.nums[i] << "\n";
		}
		else 
		{
			os << m.nums[i];
		}
	}

	return os;
}
