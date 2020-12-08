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
	void _print(Node *node) {
		if (node == nullptr) {
			return;
		} else {
			_print(node->left);
			std::cout << " " << node->data << " ";
			_print(node->right);
		}
	}
public:
	void insert(int data) {
		root = _insert(root, data);
	}
	void Print() {
		_print(root);
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
	bst.Print();
	std::cout << "BST main end ()" << std::endl;
}
