#include <iostream>

using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(0);

bool isDivisible(int n, int d) {
  return (0 == (n % d));
}

int main()
{
  fast
  
  int n, k, moves = 0, l, r;

  cin >> n >> k;

  while(n--) 
  {
    cin >> l >> r;
    if (isDivisible(l-1, k) || isDivisible(r+1, k))
      moves++;
  }

  cout << moves << endl;

  return 0;
}