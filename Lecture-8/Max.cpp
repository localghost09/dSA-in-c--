#include<iostream>
using namespace std;

int main() {
    int arr[] = {22,3,5,788,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max = 0;
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<"Maximum Value in Array " <<max<<endl;
    return 0;
}