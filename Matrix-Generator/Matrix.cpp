#include "Matrix.h"

Matrix::Matrix(int dim)
{
	for (int i = 0; i < dim; i++) 
	{
		nums.push_back({});

		for (int j = 0; j < dim; j++)
		{
			nums[i].push_back(1);
		}
	}
}

Matrix::Matrix(std::vector<std::vector<double>> matrix)
{
	nums = matrix;
}

void Matrix::add(int row1, int row2)
{
	for (int i = 0; i < nums[row2 - 1].size(); i++)
	{
		nums[row2 - 1][i] += nums[row1 - 1][i];
	}
}

void Matrix::subtract(int row1, int row2)
{
	for (int i = 0; i < nums[row2 - 1].size(); i++)
	{
		nums[row2 - 1][i] -= nums[row1 - 1][i];
	}
}

void Matrix::multiply(double val, int row)
{
	for (int i = 0; i < nums[row - 1].size(); i++)
	{
		nums[row - 1][i] *= val;
	}
}


std::ostream& operator<<(std::ostream& os, const Matrix& m)
{
	for (int i = 0; i < m.nums.size(); i++) 
	{
		for (int j = 0; j < m.nums[0].size(); j++)
		{
			os << m.nums[i][j] << "\t";
		}

		os << "\n";
	}

	return os;
}
