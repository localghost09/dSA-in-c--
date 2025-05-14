#include<iostream>
using namespace std;

int decToBinary(int decimal){
    int ans = 0 , pow = 1;
    while(decimal>0){
        int rem = decimal %2;
        decimal = decimal/2;
        ans +=(rem*pow);
        pow = pow*10;
    }
    return ans;
}

int main() {
    

    int n;
    cout<<"Enter a N Decimal Number"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<< decToBinary(i)<<endl;
    }

    



    return 0;
}