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

float bfs(int u, vector<int> &res, int n)
{
    queue<int> q;
    q.push(u);
    v[u] = true;
    float av = 0;
    vector<int> cost;
    cost.assign(n, -1);
    cost[0] = 0;
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
    for(int i = 0; i < res.size(); i++)
    {
        av += cost[res[i]];
    }
    return (2 * av)/res.size();
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        v.assign(n, false);
        g.assign(n, vector<int>());
        for(int i = 0; i < n -1 ; i++)
        {
            int a, b;
            cin >> a >> b;
            edge(a -1,b-1);
        }
        float av = 0;
        std::vector<int> res(m) ;
        for(int i = 0; i < m; i++)
        {
            cin >> res[i];
            res[i]--;
        }
        av = bfs(0, res, n);
        printf("%5f", av);
        cout << endl;        
    }
    
}