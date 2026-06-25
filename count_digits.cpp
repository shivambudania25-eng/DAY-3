#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 0;

    cout << "Enter a number: ";
    cin >> n;

    int temp = n < 0 ? -n : n;
    if (temp == 0) {
        count = 1;
    } else {
        while (temp > 0) {
            ++count;
            temp /= 10;
        }
    }

    cout << "Number of digits: " << count << endl;

    return 0;
}
