#include <bits/stdc++.h>
using namespace std;

int main() {
    long long number;
    cin >> number;

    bool prime = number >= 2;
    for (long long divisor = 2; divisor <= number / divisor && prime; divisor++) {
        if (number % divisor == 0) {
            prime = false;
        }
    }

    if (prime) {
        cout << number << " is Prime" << endl;
    } else {
        cout << number << " is Not Prime" << endl;
    }

    long long next = number + 1;
    if (next < 2) {
        next = 2;
    }

    bool nextPrime = false;
    while (!nextPrime) {
        nextPrime = next >= 2;
        for (long long divisor = 2; divisor <= next / divisor && nextPrime; divisor++) {
            if (next % divisor == 0) {
                nextPrime = false;
            }
        }
        if (!nextPrime) {
            next++;
        }
    }

    cout << "Next Prime = " << next;
}