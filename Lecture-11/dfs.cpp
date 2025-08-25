#include<iostream>
using namespace std;

#define MAX 10

int graph[MAX][MAX];
int visited[MAX] = {0};

int num_nodes = 9;

void dfs(int node) {
    visited[node] = 1;
    cout<<node << " ";

    for(int i=1; i<num_nodes; i++){
        if(graph[node][i] == 1 && !visited[i]){
            dfs(i);
        }
    }
}

int main(){
    graph[5][3] = 1;
    graph[5][7] = 1;
    graph[3][2] = 1;
    graph[3][4] = 1;
    graph[7][8] = 1;
    graph[4][8] = 1;

    cout<<" Dfs traversal from node "<<endl;
    dfs(5);
}