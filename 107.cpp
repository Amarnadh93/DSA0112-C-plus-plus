#include <iostream>
using namespace std;

void check_number_sign() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n > 0) {
        cout << "Positive" << endl;
    } else if (n < 0) {
        cout << "Negative" << endl;
    } else {
        cout << "Zero" << endl;
    }
}

int main() {
    check_number_sign();
    return 0;
}
