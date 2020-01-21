#include <iostream>
#include <set>

using namespace std;


int main()
{
    int n;
    string a;
    set <char> alphabet;
    
    cin >> n >> a;
    
    while (n--) {
        alphabet.insert(tolower(a[n]));
    }
    
    cout <<  (alphabet.size() == 26 ? "YES" : "NO");

}
