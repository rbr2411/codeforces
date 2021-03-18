#include <bits/stdc++.h>
using namespace std;
vector<bool> v;
vector<vector<int>> g;

void edge(int a, int b)
{
    //undirected graph
    g[a].push_back(b);
    g[b].push_back(a);
}

void bfs(int u, int n)
{
    queue<int> q;
    q.push(u);
    v[u] = true;
    vector<int> cost;
    cost.assign(n, -1);
    cost[u] = 0; // start node
    while(!q.empty())
    {
        int f = q.front();
        q.pop();
        //cout << f << " ";

        // covering all neighbours of f
        
        for(auto it = g[f].begin(); it!= g[f].end(); it++)
        {
            if(!v[*it])
            {
                q.push(*it); 
                v[*it] = true;
                cost[*it] = cost[f] + 1;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(i == u)
            continue;
        else if(cost[i] == -1)
            cout << -1 << " ";
        else cout << cost[i] * 6 << " ";    
    }
    cout << endl;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, e;
        cin >> n >> e;
        v.assign(n, false);
        g.assign(n, vector<int>());
        for(int i = 0; i < e; i++)
        {
            int a, b;
            cin >> a >> b;
            edge(a -1,b-1);
        }
    
        int s;  // start vertex
        cin >> s;
        bfs(s-1, n);
    }
    
}