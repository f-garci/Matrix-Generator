#include "Matrix.h"
#include <cmath>

Matrix::Matrix(int dim)
{
	dimensions = dim;
	for (int i = 0; i < dim; i++) 
	{
		nums.push_back({});

		for (int j = 0; j < dim; j++)
		{
			nums[i].push_back(0);
		}
	}
}

std::ostream& operator<<(std::ostream& os, const Matrix& m)
{
	for (int i = 0; i < m.nums.size(); i++) 
	{
		for (int j = 0; j < m.nums[0].size(); j++)
		{
			os << m.nums[i][j];
		}

		os << "\n";
	}

	return os;
}
