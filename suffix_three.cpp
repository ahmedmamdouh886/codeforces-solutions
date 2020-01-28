#include <iostream>
#include <vector>

using namespace std;

string getLastChars(string s, int n)
{
    return s.substr(s.length() - n);
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, length;
  string t, result;
  vector<string> vec;

  cin >> n;
  while (n--) {
    cin >> t;
    length = t.length();
    if (2 <= t.length() && "po" == getLastChars(t, 2)) {
      vec.push_back("FILIPINO");
    }else if (5 <= length && "mnida" == getLastChars(t, 5)) {
      vec.push_back("KOREAN");
    }else if(4 <= length){
        string sub;
        sub = getLastChars(t, 4);
        if ("desu" == sub || "masu" == sub) {
            vec.push_back("JAPANESE");
        }
    }
  }

  for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl; 
  }
}
