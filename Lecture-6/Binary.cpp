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

int BinToDec(int binary){
    int ans =0, pow = 1;
    while(binary>0){
        int rem = binary%10;
        
        ans += (rem*pow);
        binary = binary/10;
        pow = pow*2;
    }
    return ans;
}

int main() {
    

    // int n;
    // cout<<"Enter a N Decimal Number"<<endl;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     cout<< decToBinary(i)<<endl;
    // }

    
    cout<<BinToDec(101);


    return 0;
}