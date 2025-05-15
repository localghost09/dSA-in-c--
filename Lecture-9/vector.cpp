#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec={1,2,3};
    // for(int i:vec){
    //     cout<<i <<endl;
    // }

    //Vector Functions 
    //size
    //cout<<"size = " <<vec.size() <<endl;

    //push_back
    // vec.push_back(35);
    // // Print the updated vector
    // for(int i:vec){
    //     cout<<i <<endl;
    // }

    //vec.pop_back();
    // for(int val:vec){
    //     cout<<val<<endl;
    // }

    cout<< vec.front() <<endl;
    cout<<vec.back() <<endl;
    cout<<vec.at(1)<<endl;


    return 0;
}