#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k, e, good = 0;
    
    cin >> n >> k;

    int mod;
    for (int i = 0; i < n; ++i)
    {
        set<int> digits;

        cin >> e;
        while(e > 0) 
        {
            mod = e % 10;
            if(mod <= k) {
                digits.insert(mod);
            }
            e = e / 10;
        }

        if(digits.size() == k+1) {
            good++;
        }

    }
     
    cout << good << endl;

}




// Another solution

/*

#include <iostream>
#define ll long long int
#define all(a) a.begin(),a.end()
using namespace std;

int main(void)
{
    ll n, k, c=0, i, flag;
    cin>>n>>k;
    string s;
    ll a[11];
    while(n--)
    {
        cin>>s;
        flag = 1;
        for(i=0; i<=k; i++)
            a[i] = 0;
        for(i=0; i<s.length(); i++)
        {
            a[s[i] - 48]++;
        }
        for(i=0; i<k+1; i++)
        {
            if(!a[i])
                flag = 0;
        }
        if(flag)
            c++;
    }
    cout<<c<<"\n";
}

*/