#include <iostream>
#include <algorithm>
 
using namespace std;
 
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
int main()
{
  fast
 
  int t;

  cin >> t;
  while(t--) {
  	int n;
  	cin >> n;
    int athletes[n];
    int res = INT_MAX;
    for (int i = 0; i < n; i++) {
    	cin >> athletes[i];
    }
    
    sort(athletes, athletes+n);

    for (int i = 0; i < n - 1; i++)
    {
      int resTemp = abs(athletes[i] - athletes[i+1]);
      if (resTemp < res)
      {
        res = resTemp;
      }
    }
    
    cout << res << endl;
  }
  
  return 0;
}