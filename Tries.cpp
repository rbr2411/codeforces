// C++ implementation of search and insert 
// operations on Trie 
#include <bits/stdc++.h> 
using namespace std; 

const int ALPHABET_SIZE = 26; 

// trie node 
struct TrieNode 
{ 
    struct TrieNode *children[ALPHABET_SIZE]; 

    // isEndOfWord is true if the node represents 
    // end of a word 
    bool isEndOfWord; 
}; 

// Returns new trie node (initialized to NULLs) 
TrieNode *getNode(void) 
{ 
    TrieNode *pNode = new TrieNode; 

    pNode->isEndOfWord = false; 

    for (int i = 0; i < ALPHABET_SIZE; i++) 
        pNode->children[i] = NULL; 

    return pNode; 
} 

// If not present, inserts key into trie 
// If the key is prefix of trie node, just 
// marks leaf node 
void insert(TrieNode *root, string key) 
{ 
    TrieNode *pCrawl = root; 

    for (int i = 0; i < key.length(); i++) 
    { 
        int index = key[i] - 'a'; 
        if (!pCrawl->children[index]) 
            pCrawl->children[index] = getNode(); 

        pCrawl = pCrawl->children[index]; 
    } 

    // mark last node as leaf 
    pCrawl->isEndOfWord = true; 
} 

// Returns true if key presents in trie, else 
// false 
int search(struct TrieNode *root, string key,vector<string>words) 
{ 
    int count = 0;
    TrieNode *pCrawl = root; 
    for(int i =0;i<key.length();i++){
        int index = key[i] - 'a';
        if(pCrawl->children[index] != NULL){
            pCrawl = pCrawl ->children[index];
        }
        else return 0;
    }
    int n = words.size();
    for(int i=0;i<n;i++){
        if(words[i].length()<key.length()){
            continue;
        }
        else{
            if(key.compare(words[i].substr(0,key.length()))== 0)
                count++;
            else continue;
        }
    }
    return count;
} 

// Driver 
int main() 
{ 
    int n;
    cin >> n;
    struct TrieNode *root = getNode();
    vector<vector<string>>queries;
    vector<string>words;
    vector<int>data;
    for(int i=0;i<n;i++){
        queries[i].resize(2);
        cin >> queries[i][0] >> queries[i][1];
    }
    for(int i=0;i<n;i++){
        if (queries[i][0].length()==3) {
         insert(root,queries[i][1]);
         words.push_back(queries[i][1]);
        }
        else data.push_back(search(root,queries[i][1],words));
    }
    for(int i=0;i<data.size();i++){
        cout << data[i] << endl;
    }
} 
