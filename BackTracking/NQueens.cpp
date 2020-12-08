/*
 * NQueens.cpp
 *
 *  Created on: Dec 8, 2020
 *      Author: pravinkumar
 */

#include "NQueens.h"
#include <iostream>

NQueens::NQueens(int num_of_queens) :
		n(num_of_queens) {
	matrix.resize(num_of_queens, std::vector<int>(num_of_queens));
}

bool NQueens::_set_queen(int col) {
	if (col == n) {
		return true;
	}
	for (int row = 0; row < n; row++) {
		if (_is_valid_pos(row, col)) {
			matrix[row][col] = 1;

			if (_set_queen(col + 1)) {
				return true;
			} else {
				matrix[row][col] = 0;
			}
		}

	}
	return false;
}

bool NQueens::_is_valid_pos(int row, int col) {
	for (int j = 0; j < col; j++) {
		if (matrix[row][j] == 1) {
			return false;
		}
	}

	for (int c = col - 1, r = row - 1; c >= 0 && r >= 0; r--, c--) {
		if (matrix[r][c] == 1)
			return false;
	}
	for (int c = col - 1, r = row + 1; c >= 0 && r < n; r++, c--) {
		if (matrix[r][c] == 1) {
			return false;
		}
	}

	return true;
}

void NQueens::solve() {
	if (_set_queen(0)) {
		std::cout << "Fixed " << std::endl;
		_print();
	} else {
		std::cout << "Not fixed" << std::endl;
	}
}

void NQueens::_print() {
	for (int i = 0; i < n; i++) {
		std::cout << "\n\n";
		for (int j = 0; j < n; j++) {
			std::cout << matrix[i][j] << "\t";
		}
	}

}

NQueens::~NQueens() {
}

