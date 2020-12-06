/*
 * main.cpp
 *
 *  Created on: Dec 6, 2020
 *      Author: pravinkumar
 */
#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>

void Reverse_String(std::string &str) {
	std::string s { };

	for (int i = str.length() - 1; i >= 0; --i) {
		s += str[i];
	}
	str = s;
}
void ReverseUsingBuiltIn(std::string &str) {
	std::reverse(str.begin(), str.end());
}

void swap(char &c1, char &c2) {
	char c = c1;
	c1 = c2;
	c2 = c;
}

void ReverseBySwap(char *str) {
	int length = strlen(str);
	for (int i = 0, j = length - 1; i < j; ++i, --j) {
		swap(str[i], str[j]);
	}
}

std::string ReverseIterators(const std::string& str){
	return std::string(str.rbegin(), str.rend());
}

int main() {
	std::string s = "Hello world";
	char str[] = "hello world";
	std::cout << "Ordinary string " << s << std::endl;
	//Reverse_String(s);
	//ReverseBySwap(str);
	std::string str2 = ReverseIterators(s);
	std::cout << "After reversing " << str2 << std::endl;
}
