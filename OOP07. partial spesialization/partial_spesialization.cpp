#include<iostream>

using namespace std;

template<class T, int height, int width>
class Matrix {
	T matrix[height][width];
public:
	const auto& operator()(int i, int j) const
	{
		if (i<0 || i > height || j <0 || j > width) {
			cout << "Matrix index error" << endl;
			exit(1);
		}
		return matrix[i][j];
	}

	auto& operator()(int i, int j)
	{
		if (i<0 || i > height || j <0 || j > width) {
			cout << "Matrix index error" << endl;
			exit(1);
		}
		return matrix[i][j];
	}
	auto getMin() {
		auto min = matrix[0][0];
		for (size_t i = 0; i < height; i++)
		{
			for (size_t j = 0; j < width; j++)
			{
				if (matrix[i][j] < min) {
					min = matrix[i][j];
				}
			}
		}
		return min;
	}

	auto getMax() {
		auto max = matrix[0][0];
		for (size_t i = 0; i < height; i++)
		{
			for (size_t j = 0; j < width; j++)
			{
				if (matrix[i][j] > max) {
					max = matrix[i][j];
				}
			}
		}
		return max;
	}
};

// chastichnaya spesializaiya
template<int height, int width>
class Matrix<const char*, height, width> {
	const char* matrix[height][width];
public:
	const auto& operator()(int i, int j) const
	{
		if (i<0 || i > height || j <0 || j > width) {
			cout << "Matrix index error" << endl;
			exit(1);
		}
		return matrix[i][j];
	}

	auto& operator()(int i, int j)
	{
		if (i<0 || i > height || j <0 || j > width) {
			cout << "Matrix index error" << endl;
			exit(1);
		}
		return matrix[i][j];
	}
	auto getMin() {
		auto min = matrix[0][0];
		for (size_t i = 0; i < height; i++)
		{
			for (size_t j = 0; j < width; j++)
			{
				if (strcmp(matrix[i][j], min) < 0) {
					min = matrix[i][j];
				}
			}
		}
		return min;
	}

	auto getMax() {
		auto max = matrix[0][0];
		for (size_t i = 0; i < height; i++)
		{
			for (size_t j = 0; j < width; j++)
			{
				if (strcmp(matrix[i][j], max) > 0) {
					max = matrix[i][j];
				}
			}
		}
		return max;
	}
};

int main() {
	const int height = 2;
	const int width = 2;

	//Matrix<int, height, width> intMatrix;
	//// functor
	//intMatrix(0, 0) = 5;
	//intMatrix(0, 1) = 25;
	//intMatrix(1, 0) = 11;
	//intMatrix(1, 1) = -5;

	//cout << intMatrix.getMin() << endl;
	//cout << intMatrix.getMax() << endl;

	Matrix<const char*, height, width> charMatrix;
	// functor
	charMatrix(0, 0) = "Salam";
	charMatrix(0, 1) = "25";
	charMatrix(1, 0) = "Hi";
	charMatrix(1, 1) = "Goodbye";

	cout << charMatrix.getMin() << endl;
	cout << charMatrix.getMax() << endl;

}