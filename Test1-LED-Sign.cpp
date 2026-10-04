#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	if (n == 2) {
		cout << "**\n**\n";
		return 0;
	}

	for (int row = 0; row < n; ++row) {
		int layer = (row < n - 1 - row) ? row : n - 1 - row;
		int left, right;

		if (n % 2 == 1) {
			left = n / 2 - layer;
			right = n / 2 + layer;
		} else {
			left = n / 2 - 1 - layer;
			right = n / 2 + layer;
		}

		for (int col = 0; col < n; ++col) {
			cout << (col == left || col == right ? '*' : ' ');
		}
		cout << '\n';
	}

	return 0;
}


