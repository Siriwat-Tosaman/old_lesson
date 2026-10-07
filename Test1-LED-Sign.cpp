#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	if (n == 1) {
		cout << "+";
		return 0;
	}
	if (n == 2) {
		cout << "**" << endl;
		cout << "**";
		return 0;
	}

	if (n % 2 != 0) { 
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (n / 2 + 2 == i + j || n + 1 + (n / 2) == i + j || i - j == n / 2 || j - i == n / 2) {
					cout << "*";
				}
				else {
					cout << " ";
				}
				


			}
			cout << endl;
		}
	}
	else {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (n / 2 + 1 == i + j || i - j == n / 2 || j - i == n / 2 || n + 1 + (n / 2) == i + j) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}
	}

	return 0;
}