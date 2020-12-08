/*
 * BstStackApproch.h
 *
 *  Created on: Dec 8, 2020
 *      Author: pravinkumar
 *
 *
 */
/*
 *
 * Trying to implement BST with stacks and loops;
 *
 * */


#ifndef BSTSTACKAPPROCH_H_
#define BSTSTACKAPPROCH_H_

#include <iostream>
#include <vector>

template<typename T>
class BstStackApproch {
private:
	std::vector<T> _stack { };
	int top;
	int size;
private:
	void _print();
	void _search(T&);
	void _insert(T&);
public:
	void insert(T&);
	void search(T&);

	BstStackApproch();
	virtual ~BstStackApproch();
};

template<typename T>
inline void BstStackApproch<T>::_print() {
	std::cout << "Printing elements of BST " << std::endl;
	for (auto &item : _stack) {
		std::cout << item << "\t";
	}
}

template<typename T>
inline void BstStackApproch<T>::_search(T &data) {
	for (auto &item : _stack) {
		if (item == data) {
			std::cout << "Print yes" << std::endl;
			return;
		}
	}
	std::cout << "Print NO!" << std::endl;
}

template<typename T>
inline void BstStackApproch<T>::_insert(T&) {
	//Todo if I insert that makes; same as regular approch; will think on it and get back don't worry boy;


}

template<typename T>
inline void BstStackApproch<T>::insert(T&) {
}

template<typename T>
inline void BstStackApproch<T>::search(T&) {
}



#endif /* BSTSTACKAPPROCH_H_ */
