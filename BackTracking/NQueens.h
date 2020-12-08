/*
 * NQueens.h
 *
 *  Created on: Dec 8, 2020
 *      Author: pravinkumar
 */

#ifndef NQUEENS_H_
#define NQUEENS_H_
#include <vector>
class NQueens {
private:
	int n;
	std::vector<std::vector<int>> matrix;
	bool _set_queen(int);
	bool _is_valid_pos(int, int);
	void _print();
public:
	NQueens(int num_of_queens);
	void solve();
	virtual ~NQueens();
};

#endif /* NQUEENS_H_ */
