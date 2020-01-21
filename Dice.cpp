#include <iostream>
#include <cmath> // abs();
using namespace std;

int main()
{
	
	int a,b,aWin,draw,bWin;
	aWin = bWin = draw = 0;
	cin >> a >> b;
	
	for( int i = 1 ; i < 7 ; i++ )
	{
		if( abs(a-i) < abs(b-i) )
		{
			aWin += 1;
		}else if( abs(a-i) == abs(b-i) ){
			draw += 1;
		}else{
			bWin += 1;
		}
	}
	
	cout << aWin << ' ' << draw << ' ' << bWin;

}
