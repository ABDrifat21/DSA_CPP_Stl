#include<bits/stdc++.h>
using namespace std;

const int n = 1e5+10;


vector<int> graph[n];
bool visit[n];

void dfs(int vertex){

          if(visit[vertex]) return;
          visit[vertex] = true;
          cout << "Current->" <<vertex << " ";
    for(auto child :graph[vertex]){

        //
           
           dfs(child);
    }
}
int main (){
    int v,e;
    cin >> v >> e ;

   
    for(int i =0;i<e;i++){
        int v1,v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);

    }
    dfs(1);

}