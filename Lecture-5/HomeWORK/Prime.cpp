#include<iostream>
using namespace std;

void Prime(int n){
    if(n<=1){
        cout<<"not a prime no"<<endl;
    }
    else if(n==2){
        cout<<"prime number"<<endl;
    }
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            cout<<" not   prime"<<endl;
            break;
        }
        else{
            cout<<"prime number"<<n<<endl;
            break;
        }
    }
}

int main(){

    Prime(2);


    return 0;
}