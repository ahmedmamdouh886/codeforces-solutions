#include <iostream>

//http://codeforces.com/problemset/problem/510/A

using namespace std;

int main()
{
	
	int n,m;
	cin >> n >> m;
	
	string hash(m,'#');
	string dotsHashRight(m-1,'.');
	string dotsHashLeft(m-1,'.');
	
	for (int i=1;i<n+1;i++)
	{
		if (i % 2 != 0)
        {
            cout << hash << endl;
        }
        else if (i % 4 == 0)
        {
			cout << '#' << dotsHashLeft << endl;
            
        }
        else
        {
            cout << dotsHashRight << '#' << endl;
        }
        
	}
}
