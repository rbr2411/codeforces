#include<bits/stdc++.h>
using namespace std;
struct node{
    int count;
    node *next[26];
    node()
    {
        count = 0;
        for(int i = 0; i<26; i++)
            next[i] = NULL;
    } 
}*root;

void add(string name)
{
    node *current = root;
    current->count++;
    for(int i = 0; i<name.length(); i++)
    {
        char nw = name[i];
		int index = nw - 'a';
        if(current->next[index] == NULL)
            current->next[index] = new node();
        current = current->next[index];
        current->count++;
    }
}

int solve(string partial)
{
    node *current = root;
    for(int i = 0; i<partial.size(); i++)
    {
        char nw = partial[i];
		int index = nw -'a';
        if(current->next[index] == NULL)
            return 0;
        current = current->next[index];
    }
    return current->count;
}

string command, str;
int main()
{
    int n;
    root = new node(); // new operator returns a pointer to newly created object;
    cin >> n;
    while(n--)
    {
        cin >> command >> str;
        if(command == "add")
            add(str);
        else
            printf("%d\n",solve(str));
    }
}