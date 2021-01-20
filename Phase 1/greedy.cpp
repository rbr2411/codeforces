// at each stage we search for locally optimal choice with the hope of finding a global optimum 
//important: at each stage we are searching for local optimum
//however we might not always end up with global optimum 

// properties:
//1.Greedy choice property: Global optimum can be arrived at by selecting local optimum
//2.Optimal substructure: An optimal solution to problem contains optimal solution to subproblems

//imp: greedy algo never reconsider its choices.
//eg. 1.Prim's Mimimum spanning tree
// 2.Huffman coding.
//3.Activity selection problem

#include <bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a,
	const pair<int,int> &b)
	{
		return a.second < b.second;
	}
int main()
{
	int n;
	cin >> n;
	std::vector<pair <int,int> > activity(n);
	for(int i =0;i<n;i++)
	{
		cin >> activity[i].first >> activity[i].second;
	}
	int max =0,i=0;
	sort(activity.begin(), activity.end(),sortbysec);
	cout << "----------------------" << endl;
	cout << activity[0].first << " " <<activity[0].second << endl;
	max++;
	for(int j=1;j < n;j++)
	{
		if(activity[j].first >= activity[i].second)
		{
			cout << activity[j].first << " " << activity[j].second << endl;
			i =j;
			max ++;
		}
	}
	cout << max << endl;

}