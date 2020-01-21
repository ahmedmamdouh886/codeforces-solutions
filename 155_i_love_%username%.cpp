#include <iostream>

using namespace std;

int main()
{

	ios_base::sync_with_stdio(0);
    cin.tie(0);

	int n, amazing = 0, min, max, s;
	cin >> n >> s;
	min = s;
	max = s;
	for (int i = 1; i < n; ++i)
	{
		cin >> s;

		if (s > max)
		{
			max = s;
			amazing++;
		}else if (s < min) {
			min = s;
			amazing++;
		}
	}

	cout << amazing;

	return 0;

}
