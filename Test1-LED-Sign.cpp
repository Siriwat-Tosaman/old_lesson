#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int row = 0; row < n; ++row) {
		int layer = (n - 1 - abs(2 * row - (n - 1))) / 2;
		int left = max(0, (n - 1) / 2 - layer);
		int right = min(n - 1, n / 2 + layer);

		for (int col = 0; col < n; ++col) {
			if (col == left || col == right) cout << '*';
			else cout << ' ';
		}
		cout << '\n';
	}

	return 0;
}