#include <iostream>
using namespace std;

int main() {
    int n;
    long long sum;

    cout << "Enter N: ";
    cin >> n;

    if (n < 1) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    sum = 1LL * n * (n + 1) / 2;
    cout << "Sum from 1 to " << n << " = " << sum << endl;

    return 0;
}
