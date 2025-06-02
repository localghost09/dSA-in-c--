#include <iostream>
using namespace std;

int main() {
    int limit;
    cout << "Enter the upper limit: ";
    cin >> limit;

    cout << "Prime numbers up to " << limit << " are:\n";
    for (int i = 2; i <= limit; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}