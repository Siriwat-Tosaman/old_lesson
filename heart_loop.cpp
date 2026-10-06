#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;

    cout << "Enter heart size: ";
    cin >> n;

    if (n <= 0) {
        cout << "Size must be greater than 0\n";
        return 0;
    }

    int rows = n * 2 + 1;
    int cols = rows * 2;
    double scale = n * 0.75;

    for (int y = 0; y < rows; ++y) {
        for (int x = 0; x < cols; ++x) {
            // Compensate for console characters being taller than they are wide.
            double px = (x - cols / 2.0) / (scale * 2.0);
            double py = (rows / 2.0 - y) / scale;

            double heart = (px * px + py * py - 1.0);
            heart = heart * heart * heart - px * px * py * py * py;

            if (heart <= 0.12) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << '\n';
    }

    return 0;
}
