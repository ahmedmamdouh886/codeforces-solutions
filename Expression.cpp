#include <iostream>

using namespace std;

int main()
{
	int a,b,c,res,way;
	cin >> a >> b >> c;
	res = (a+b)*c;
	
	way = a+b*c;
	if (way > res)
		res = way;
			
	way = a*b+c;
	if (way > res)
		res = way;
		
		
	way = a*(b+c);
	if (way > res)
		res = way;
		
		
	way = a*b*c;
	if (way > res)
		res = way;
	
	
	way = a+b+c;
	if (way > res)
		res = way;
	
	cout << res;
	
	return 0;
	
}



// another solution is the best

/*

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int p[10];

int main()
{
    int a, b, c, i;
    scanf("%d%d%d", &a, &b, &c);
    p[0] = a*b+c;
    p[1] = a+b*c;
    p[2] = a*(b+c);
    p[3] = (a+b)*c;
    p[4] = a+b+c;
    p[5] = a*b*c;
    sort(p, p+6);
    printf("%d\n", p[5]);
}

*/
