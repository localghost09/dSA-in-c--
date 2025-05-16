#include<iostream>
#include<vector>
using namespace std;

int main() {
    // using kadane's algorithm we solve the maximum subarray sum problem 
    // its time complexity O(n).

    vector<int> vec={-2,1,-3,4,-1,2,1,-5,4};
    int currentSum = 0;
    int maximum = 0;
    for(int val:vec){
        currentSum += val;
        maximum = max(currentSum,maximum);
        if(currentSum<0){
            currentSum = 0;

        }
    }
    cout<<"Maximum Subarray Sum using kadane algorithm " <<maximum<<endl;
    return 0;
}