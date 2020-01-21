#include <iostream>
using namespace std;

int main()
{
	unsigned short int year;
	cin >> year;
	
	while (true) {

		if (year % 10 == year % 100 == year % 100 == year % 1000) {
			break;
		}

		year++;
	}
		
	cout << year;

	return 0;
}
