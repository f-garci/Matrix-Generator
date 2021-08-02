#pragma once
#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
#include <ostream>

class Matrix {
public:
	Matrix(int);
	Matrix(std::vector<std::vector<double>>);
	void add(int, int);
	void subtract(int, int);
	void multiply(double, int);
	friend std::ostream& operator<<(std::ostream&, const Matrix&);
	friend bool operator==(const Matrix&, const Matrix&);
private:
	std::vector<std::vector<double>> nums;
};

#endif

