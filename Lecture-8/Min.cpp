#include<iostream>
using namespace std;

int main() {
    int arr[] = {21,1,42,535,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int min = arr[0];
    
    for(int i=0; i<size; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"Minum Number of Array" << min <<endl;
    return 0;
}