#include <iostream>
using namespace std;

int main()
{

int rooms, p, m;
cin >> rooms;
int freeRoom=0;

for(int i = 0;i<rooms;i++)
{

	cin >> p >> m;
	
	if(m-p >= 2)
		freeRoom++;
	

}

cout << freeRoom << endl;

return 0;

}
