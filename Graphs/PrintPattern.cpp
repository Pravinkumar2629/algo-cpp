/*
 * PrintPattern.cpp
 *
 *  Created on: Dec 9, 2020
 *      Author: pravinkumar
 */



#include <iostream>
#include <vector>
using namespace std;

void print(int N, int n, int pass) {
	cout << " " << n;
	if (N == n) {
		return;
	}
	if (n > 0 && pass == 1) {
		print(N, n - 5, 1);
	} else {
		print(N, n + 5, 0);
	}
}

int main() {
	//code
	int t = 0;
	vector<int> data { };
	cin >> t;

	while (t-- > 0) {
		int N;
		cin >> N;
		data.push_back(N);

	}
	for (auto &N : data) {
		cout << N;
		print(N, N - 5, 1);
		cout << endl;
	}
	return 0;
}
