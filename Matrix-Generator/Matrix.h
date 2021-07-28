#pragma once
#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
#include <ostream>

class Matrix {
public:
	Matrix(int);
	friend std::ostream& operator<<(std::ostream&, const Matrix&);
private:
	int dimensions;
	std::vector<std::vector<int>> nums;
};

#endif

