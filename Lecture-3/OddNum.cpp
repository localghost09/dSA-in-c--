#include<iostream>

using namespace std;


int main(){

    // Sum of all odd Numbers from 1 to n;

    int n;
    cout<<"Enter n : "<<endl;
    cin>>n;
    int sum = 0;
    for(int i=1; i<=n; i+=2){
        sum = sum +i;
    }

    cout<<sum<<endl;





    return 0;
}