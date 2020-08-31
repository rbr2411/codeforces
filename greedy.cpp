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
	int max =0,i=0;
	std::vector<pair <int,int> > activity(n);
	for(int i =0;i<n;i++)
	{
		cin >> activity[i].first >> activity[i].second;
	}
	sort(activity.begin(), activity.end(),sortbysec);
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