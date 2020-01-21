#include <iostream>
using namespace std;

bool solve() {
	long long a, b, c;
	cin >> a >> b >> c;

	if (c == 0) return a == b;
	if ((b - a) % c != 0) return false;
	return (b - a) / c >= 0;
}

int main() {
	// puts --> Writes the C string pointed by str to the standard output (stdout) and appends a newline character ('\n').
	puts(solve() ? "YES" : "NO");
}
