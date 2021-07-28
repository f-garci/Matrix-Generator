#pragma once
#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
#include <ostream>

class Matrix {
public:
	Matrix(int);
	void add(int, int);
	void subtract(int, int);
	friend std::ostream& operator<<(std::ostream&, const Matrix&);
private:
	int dimensions;
	std::vector<std::vector<int>> nums;
};

#endif

