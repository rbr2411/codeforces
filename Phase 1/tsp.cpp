//Brute force approach to travelling salesman problem: since we are considering all the permutations
//time complexity: O(n!) 
#include <bits/stdc++.h>
using namespace std;
#define V 4
int tsp(int graph[][V],int s){
	// store the  vertices other than start vertex
	std::vector<int> v;
	for(int i=0;i<V;i++){
		if(i!=s) v.push_back(i);
	}
	int min_path = INT_MAX;
	do{
		int current_pathweight = 0;
		int k = s;
		for(int i=0;i<v.size();i++){
			current_pathweight += graph[k][v[i]];
			k = v[i];
		}
		current_pathweight += graph[k][s];
		min_path = min(min_path,current_pathweight);
	}
	while(next_permutation(v.begin(), v.end()));
	return min_path;
}
int main()
{
	int graph[][V] = {
		{ 0, 10, 15, 20 }, 
		{ 10, 0, 35, 25 },
		{ 15, 35, 0, 30 }, 
		{ 20, 25, 30, 0 } 
	};
	int s =0; //s: starting vertex
	//graph: adjacency matrix
	cout << tsp(graph,s);
}