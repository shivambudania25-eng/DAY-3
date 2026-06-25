#include <iostream>
using namespace std;

int main() {
    int n;
    int reversed = 0;

    cout << "Enter a multi-digit number: ";
    cin >> n;

    int temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }

    cout << "Reversed number: " << reversed << endl;

    return 0;
}
