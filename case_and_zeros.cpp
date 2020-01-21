#include <iostream>
using namespace std;

int main()
{
	int length, ones = 0, zeros = 0;
	string str;
	cin >> length >> str;

	for (int i = 0 ; i <= length-1 ; i++)
	{
		if(str[i] == '1')
			ones++;
		else
			zeros++;
	}

	cout << abs(ones-zeros);

	return 0;
}
