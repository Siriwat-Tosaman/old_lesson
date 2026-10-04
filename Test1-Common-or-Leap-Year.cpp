#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0){
                cout << year << " is leap year";
                return 0;
            }
            cout << year << " is common year";
            return 0;

        }
        cout << year << " is leap year";
        return 0;

    }
    cout << year << " is common year";
    return 0;
}
