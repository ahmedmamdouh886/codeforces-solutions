#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

	unsigned short int s;
	cin >> s;
	unsigned short int skills[s], skills_count = 0;

	for (int i = 0; i < s; i++)
	{
		cin >> skills[i];
	}

	sort(skills, skills+s);

	for (int j = 0; j < s-1;)
	{
		skills_count += (skills[j+1] - skills[j]);
		j += 2;
	}

	cout << skills_count;

	return 0;

}