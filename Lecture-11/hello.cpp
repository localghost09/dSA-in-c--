#include<iostream>

using namespace std;

#define MAX 10
#define QUEUE_SIZE 100


int queue[QUEUE_SIZE];
int front = 0, rear = 0;

void enqueue (int value){
    if(rear< QUEUE_SIZE){
        queue[rear++] = value;
    }
}

int dequeue() {
    if(front<rear){
        return queue[front++];
    }
    return -1;
}

int isEmpty(){
    return front == rear;
}

int graph[MAX][MAX];
int visited[MAX] = {0};

int num_nodes = 9;

void bfs(int start){
    enqueue(start);
    visited[start] = 1;

    while(!isEmpty()){
        int node = dequeue();
        cout<<node<<" ";

        for(int i = 1; i<num_nodes; i++){
            if(graph[node][i] == 1 && !visited[i]){
                enqueue(i);
                visited[i] = 1;
            }
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

    cout<<"BFS traversal starting from node 5 : "<<endl;
    bfs(5);

    return 0 ;
}