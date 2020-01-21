#include <iostream>
using namespace std;
//http://codeforces.com/problemset/problem/432/A

int main()
{
	int std,appearance,stdNum,teamsNum;
	cin >> std >> appearance;
	int stud[2001];
	
	for (int i=1;i<std+1;i++)
	{
		cin >> stud[i];
		if((appearance + stud[i]) <= 5)
		  	stdNum++;
	}

	cout << stdNum/3 << endl;
	return 0;
}
