#include <iostream>
using namespace std;

int LuckyNumbers[] = {4,7,44,74,47,444,447,474,477,744,747,477,774,777};

bool IsLucky(int Input)
{

int i;

for(i=0;i<12;i++)
{

if( !(Input % LuckyNumbers[i] ) )
{
	return true;
}

}

return false;

}



int main()
{

int Input;
cin >> Input;

if( IsLucky(Input) )
{
	cout << "YES" << endl;
}else
{
	cout << "NO" << endl;
}

return 0;

}