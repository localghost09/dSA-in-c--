#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter n : " <<endl;
    cin>>n;
    int fact = 1;
    for(int i=1; i<n; i++){
        fact = fact * i;
    }

    cout<< " factorial of n number " <<fact<<endl;
    return 0;
}