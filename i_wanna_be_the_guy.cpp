#include <iostream>
#include <set> 

// https://www.geeksforgeeks.org/fast-io-for-competitive-programming

using namespace std;

int main()
{

	ios_base::sync_with_stdio(0);
    cin.tie(0);

    set<int> levels;
    int n, index = 0;

    cin >> n;

    int x;
    cin >> x;
    while(x--) {
    	cin >> index;
    	levels.insert(index);
    }

    int y;
    cin >> y;
    while(y--) {
    	cin >> index;
    	levels.insert(index);
    }

    if(levels.size() == n)
    	cout << "I become the guy.";
    else
    	cout << "Oh, my keyboard!";

}
