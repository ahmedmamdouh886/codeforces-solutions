#include <iostream>
#include <string>
#include<algorithm>

using namespace std;
 
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
int main()
{
  fast
  int t, one = 0, two = 0, three = 0, size = 0, i = 0, res = 0, tempRes = 0, tempIndex;
  bool oneExist = false, twoExist = false, threeExist = false;
  string s;

  cin >> t;
  while(t--) {
    cin >> s;
    size = s.size();
    while(i < size) {
      tempIndex = s.at(i);
      if (tempIndex == '3') {
        three = i;
        threeExist = true;
      }
      
      if (tempIndex == '2') {
        two = i;
        twoExist = true;
      }

      if (tempIndex == '1') {
        one = i;
        oneExist = true;
      }

      if (threeExist && twoExist && oneExist)
      {
        tempRes = (max(one, max(two, three)) - min(one, min(two, three)));
        tempRes++;
        if (res == 0 || tempRes < res)
          res = tempRes;   
      }

      i++;
    }

    cout << res << endl;
    
    three = two = one = 0;
    threeExist = twoExist = oneExist = false;
    res = 0;
    i = 0;
    tempRes = 0;
  }
 
  return 0;
}