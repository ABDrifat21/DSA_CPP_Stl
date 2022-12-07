#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
vector<int> graph[N];

bool visited [N];
int level[N];
void bfs(int root){
    deque<int> dq;
    dq.push_back(root);
    visited[root] = true;
    while (!dq.empty())
    {
        int cur_vertex = dq.front();
        cout << cur_vertex << " ";
        dq.pop_front();
        for(int child :graph[cur_vertex]){
            if(!visited[child]){
               
                dq.push_back(child);
                 visited[child] = true;
            }
        }
        
    }
    
}

int main(){

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int v1,v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    bfs(1);
    
}