#include<iostream>
#include<climits>
using namespace std;

int main() {

    // Maximum Sub Array Problem using Bruteforce Approach


    int n=5;
    int arr[5] = {1,2,3,4,5};
    int maximum = INT_MIN;
    for(int strt = 0; strt<n; strt++){
        int currentSum =0;
        for(int end=strt; end<n; end++){
            currentSum += arr[end];
            maximum = max(currentSum, maximum);
        }
    }

    cout<<"Maximum sub array value is " <<maximum<<endl;
    return 0;
}