#include <iostream>

using namespace std;

int main()
{

    // int n;
    // cin >> n;

    // int num = 1;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         cout<<num;
    //         num++;
    //     }
    //     cout<<endl;
    // }

    // char ch = 'A';

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<ch;
    //         ch++;
    //     }
    //     cout<<endl;
    // }

    // cout<<"after pattern " <<ch;

    // Star Pattern
    //  *
    //  * *
    //  * * *

    // int m = 3;
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    //
    // 1
    // 2 2
    // 3 3 3

    // int m = 3;
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << i+1;
    //     }
    //     cout << endl;
    // }

    int n=4;
    char ch='A';

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<ch <<" ";
            
            
        }
        ch++;
        cout<<endl;
    }

    return 0;
}