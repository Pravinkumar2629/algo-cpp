/*
 * ArrayPrblms.cpp
 *
 *  Created on: Dec 6, 2020
 *      Author: pravinkumar
 */

#include "Excercises.h"
#include <iostream>
#include <unordered_set>

void TwoSumV1(int arr[], int length, int targetSum){
	std::unordered_set<int> comps;
	bool hasFound = false;
	for(int i = 0; i < length ; i ++){
		int val = arr[i];
		if(val < targetSum){
			if(comps.find(val) != comps.end()){
				std::cout << "Found pair at" << std::endl;
				hasFound = true;
				break;
			}
		}
	}
	if(hasFound != true){
		std::cout << "Not found!" << std::endl;
	}
}


 //{-2, -3, 4, -1, -2, 1, 5, -3}
void MaximumSubArray(int arr[], int length){
	int max_sum = 0;
	int last_sum = 0;

	for(int i = 0; i < length ; i ++){
		last_sum += arr[i];
		if(max_sum < last_sum){
			max_sum = last_sum;
		}
		if(last_sum < 0){
			last_sum = 0;
		}
	}
}


