#include <iostream>
#include <algorithm>
 
using namespace std;
 
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
int main()
{
  fast
  int t, n, k, a[30], b[30], sum = 0;
  
  cin >> t;
 
  for (int c = 0; c < t; c++)
  {
    cin >> n >> k;
    for (int i = 0; i < n; i++)
      cin >> a[i];
 
    for (int i = 0; i < n; i++)
      cin >> b[i];

    sort(a, a+n);
    sort(b, b+n, greater<int>()); 
 
    for (int x = 0; x < k; x++)
      a[x] = max(a[x], b[x]);

    for (int i = 0; i < n; i++)
    sum += a[i];

    cout << sum << endl;

    sum = 0;
  }
 
  return 0;
}