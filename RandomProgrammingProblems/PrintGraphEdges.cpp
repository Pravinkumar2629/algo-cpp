/*
 * main.cpp
 *
 *  Created on: Dec 9, 2020
 *      Author: pravinkumar
 */
// { Driver Code Starts
#include<bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

// } Driver Code Ends

// The Graph structure is as follows

// Function to print graph
// adj: array of vectors to represent graph
// V: number of vertices
void printGraph(vector<int> adj[], int V) {
	// Your code here
	for (int i = 0; i < V; i++) {
		cout << i;
		for (auto &edge : adj[i]) {
			cout << "->" << edge;
		}
		cout << endl;
	}
}

// { Driver Code Starts.

//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int v, e;
//		cin >> v >> e;
//		int a, b;
//		vector<int> adj[v];
//		for (int i = 0; i < e; i++) {
//			cin >> a >> b;
//			adj[a].push_back(b);
//			adj[b].push_back(a);
//		}
//		printGraph(adj, v);
//
//	}
//	return 0;
//}


/*
 *
 1
 5 7
 0 1
 0 4
 1 2
 1 3
 1 4
 2 3
 3 4



 1
 8 14
 0 3
 0 1
 1 2
 1 4
 1 5
 1 3
 2 6
 2 4
 4 7
 5 6
 5 2
 5 3
 5 7
 7 1
 
 
 
 *
 * */




