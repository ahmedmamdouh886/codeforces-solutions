#include <iostream>

using namespace std;

int main()
{
        int n, max = 0, arr[1001];
        cin >> n;

        for (int i = 0; i < 1001; i++)
        {
            arr[i] = 0;
        }
        
        int items[n], input;
        for (int j = 0; j < n; j++)
        {
            cin >> input;
            arr[input]++;
            if(arr[input]>max)
                max = arr[input];
        }

        if(max-1 <= n-max)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        return 0;
}
