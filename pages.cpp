#include <iostream>

using namespace std;

int main()
{
    short int n, p, k;

    cin >> n >> p >> k;

    if(p-1 > k){
        cout << "<< ";
    }

    int starting_from = p - k;
   
    if(starting_from < 1 )
        starting_from = 1;

    while(starting_from < p) {
        cout << starting_from << " ";
        starting_from++;
    }

    cout << "(" << p << ")";

    if(n != p)
        cout << " ";

    int until = p+k;
    if(until > n)
        until = n;

    starting_from = p+1;
    while(starting_from <= until) {
        cout << starting_from << " ";
        starting_from++;
    }


    if(n-p > k) {
        cout << ">>";
    }

    cout << endl;
}
