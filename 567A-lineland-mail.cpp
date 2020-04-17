#include <iostream>
#include <cmath>

using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
  fast

  int n, firstDiff, leftDiff, rightDiff, lastDiff;
  cin >> n;
  int x[n];

  for (int i = 0; i < n; i++)
  {
    cin >> x[i];
  }

  cout << (x[1] - x[0]) << " " << (x[n-1] - x[0]) << endl;
  for (int i = 1; i < n-1; i++)
  {
    firstDiff = x[i] - x[0];
    leftDiff = x[i] - x[i-1];
    rightDiff = x[i+1] - x[i];
    lastDiff = x[n-1] - x[i];
    cout << min(leftDiff, rightDiff) << " " << max(firstDiff, lastDiff) << endl;
  }
  cout << (x[n-1] - x[n-2]) << " " << (x[n-1] - x[0]) << endl;

  return 0;
}
