#include <iostream>
using namespace std;

int main()
{
	
	int days,rentPrice,currDayPrice=0,afterCurrDayPrice=0,minus,prices[100];
	minus = 0;	
	cin >> days >> rentPrice;
	
	for( int i = 1; i < days + 1 ; i++ )
	{
		cin >> prices[i];
	}
	
	for( int i = 1; i < days + 1 ; i++ )
	{
		if (i==days) break;
		int diff = prices[i] - prices[i+1];
		if( diff > minus )
		{
			minus = diff;
			currDayPrice = prices[i];
			afterCurrDayPrice = prices[i+1];
		}
	}
	
	int earn = (currDayPrice - afterCurrDayPrice) - rentPrice;	
	if( ( (currDayPrice + afterCurrDayPrice ) == 0) || ( (currDayPrice - afterCurrDayPrice ) <= rentPrice )  ) earn = 0;
	
	cout << earn;
}
