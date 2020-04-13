#include <iostream>

using namespace std;

int main()
{
	int n;
	bool status;

	cin >> n;

	while (n--) {
		cin >> status;
		if (status)
		{
			break;
		}
	}

	cout << (status ? "HARD" : "EASY") << endl;
}
