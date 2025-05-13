#include<iostream>
using namespace std;


// void printHello(){
//     cout<<"Hello"<<endl;
// }

// int sum(int a , int b){
//     int s = a+b;
//     return s;
// }


// Calculate sum of number from 1 to n;

// int sumOFN(int n){
//     int sum =0;
//     for(int i=0; i<=n; i++){
//         sum = sum +i;
//     }
//     return sum;
// }


// Calculate Factorial of N numbers;

// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n; i++){
//         fact *=i;
//     }
//     return fact;
// }

//Pass By Value
//copy of arguments was passed

void changeX(int x){
    x=x*2;
    cout<< " x = " <<x<<endl; 
}

int main(){

   // printHello();
    //cout<< "sum of two number " <<sum(5,4)<<endl;
    
    //cout<<"Sum of N number are " <<sumOFN(5)<<endl;

    //cout<<"Factorial of N number are " <<factorial(3)<<endl;

    int x = 5; 
    changeX(x);
    cout<< " x = "<<x<<endl;

    return 0;
}