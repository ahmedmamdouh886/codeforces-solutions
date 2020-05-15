#include <iostream>
#include <set>

using namespace std;
#include <set> 

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int getLastNum(int &n)
{
  int digit;
  if (n > 9)
  {
  	digit = n % 10;
  	n /= 10;
  	return digit;
  }else
  {
  	return n;
  }
}

int main()
{
  fast
  int y, temp;
  set <int> digits;
  
  cin >> y;
  
  y++;
  while(true) {
  	temp = y;
  	digits.insert(getLastNum(temp));
  	digits.insert(getLastNum(temp));
  	digits.insert(getLastNum(temp));
  	digits.insert(getLastNum(temp));
  	
    if (digits.size() == 4)
    	break;
    
    digits.clear();
    y++;
  }

  cout << y << endl;

  return 0;
}