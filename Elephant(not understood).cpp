#include <iostream>

//http://codeforces.com/problemset/problem/617/A

using namespace std;

int main(){

	long long x, i, n;
	int s[]= {1, 2, 3, 4, 5};

	cin >> x;
	n = 0;

	for(i=4; i>=0; i--){
		if(x%s[i]==0){
			n = n+x/s[i];
			break;
		}
		else {
			// This while fragement is not understood
			while(x>s[i]){
				n = n + (x/s[i]);
				x=x%s[i];
			}
		}
	}

	printf("%d\n", n);

	return 0;

}
