#include <iostream>
using namespace std;

int main()
{
	int num, numSub;
	cin >> num;
    numSub = num;
    int chars[num];
	for (int i = 0 ; i < num ; i++) {
        cin >> chars[i];
        if(i>0) {
            if((chars[i-1] + chars[i]) == 1){
                numSub -= 2;
            }
        }
	}
    
    cout << numSub;
}
