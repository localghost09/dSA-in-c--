#include<iostream>

using namespace std;

int main(){
    
    // Print Number 1 to 5
    //While Loop

    int count = 1;

    while(count<=5){
        //cout<<count<<endl;
        count++;
    }

    // for loops

    for(int i=0; i<=10; i++){
        //cout<<i<<endl;
    }

    // sum of number from 1 to n ;

    int n;
    cout<<"Enter n"<<endl;
    cin>>n;

    int sum = 0;
    for(int i=0; i<=n; i++){
        sum = sum + i;
    }

    cout<<"the sum of n number is " << sum <<endl;

   
    return 0;
}