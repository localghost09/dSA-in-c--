#include<iostream>
using namespace std;

int main() {
    int arr[] = {4,2,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 7;
    int ans = -1;
    for(int i=0; i<size; i++){
        if(arr[i] == target ){
            ans=i;
        }
    }
    cout<<ans;
    return 0;
}