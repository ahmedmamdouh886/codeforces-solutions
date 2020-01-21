#include <iostream>
using namespace std;

int main()
{
	int trainNum,chest,biceps,back,x;
	string out;
	cin >> trainNum;
	chest = biceps = back = 0;
	
	for ( int i = 1 ; i < trainNum + 1 ; i++ )
	{
		cin >> x;
		if(i % 3 == 1)
		{
			chest += x;
		}else if (i % 3 == 2)
		{
			biceps += x;
		}else
		{
			back += x;
		}
	}
		
		if( chest > biceps && chest > back )	out = "chest";
		if( biceps > chest && biceps > back )	out = "biceps";
		if( back > chest && back > biceps )		out = "back";
		cout << out;
}
