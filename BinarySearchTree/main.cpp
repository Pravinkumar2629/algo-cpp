/*
 * main.cpp
 *
 *  Created on: Dec 7, 2020
 *      Author: pravinkumar
 */

/* A O(n^2) program for construction of BST from preorder
 * traversal */

#include <iostream>

//10, 5, 1, 7, 40, 50;

//root - null

int obj_count = 0;

struct Node {
	Node(int data1 = 0) {
		std::cout << "Constructing node " << ++obj_count << std::endl;
		left = nullptr;
		right = nullptr;
		data = data1;
	}
	Node *left;
	Node *right;
	int data;
	~Node() {
		std::cout << "Deleting left " << --obj_count << std::endl;
		if (left != nullptr)
			delete left;
		if (right != nullptr)
			delete right;
	}
};
class BST {
private:
	Node *root { nullptr };
	Node* _insert(Node *branch, int data) {
		if (branch == nullptr) {
			return new Node(data);
		} else {
			if (data < branch->data) {
				branch->left = _insert(branch->left, data);
			} else {
				branch->right = _insert(branch->right, data);
			}
		}
		return branch;
	}
	void _print_pre_order(Node *node) {
		if (node == NULL)
			return;
		std::cout << node->data << '\t';
		_print_pre_order(node->left);
		_print_pre_order(node->right);
	}
	void _print_post_order(Node *node) {
		if (node == NULL)
			return;
		_print_post_order(node->left);
		_print_post_order(node->right);
		std::cout << node->data << '\t';
	}

	void _print(Node *node) {
		if (node == nullptr) {
			return;
		} else {
			_print(node->left);
			std::cout << node->data << "\t";
			_print(node->right);
		}
	}

	Node* _search(Node *branch, int data) {
		if (branch != nullptr) {
			if (data < branch->data) {
				return _search(branch->left, data);
			} else if (data > branch->data) {
				return _search(branch->right, data);
			} else if (data == branch->data) {
				return branch;
			}
		}
		return nullptr;
	}
public:
	void insert(int data) {
		root = _insert(root, data);
	}
	void print() {
		_print(root);
		std::cout << std::endl;
		_print_pre_order(root);
		std::cout << std::endl;
		_print_post_order(root);
	}
	void search(int data) {
		Node *result = _search(root, data);
		if (result == nullptr) {
			std::cout << "Searched item not found!" << std::endl;
		}
		if (result != nullptr) {
			std::cout << "item found!" << std::endl;
		}
	}

	~BST() {
		std::cout << "~BST " << std::endl;
		delete root;
	}
};

int main() {
	BST bst;
	std::cout << "BST main ()" << std::endl;
	bst.insert(10);
	bst.insert(5);
	bst.insert(1);
	bst.insert(6);
	bst.insert(2);
	bst.insert(7);
	bst.insert(40);
	bst.insert(50);
	bst.search(7);
	bst.print();
	std::cout << "BST main end ()" << std::endl;
}
