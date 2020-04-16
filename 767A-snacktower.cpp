#include <iostream>

using namespace std;

bool findItem(int snacks[], int num, int size) {
    for (int i = 0; i < size; i++)
    {
        if (snacks[i] == num)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    unsigned int n, nTmp, snack, iterator = 0;
    cin >> n;
    int tmp[n];
    nTmp = n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> snack;

        if (snack != nTmp)
        {
            tmp[iterator] = snack;
            iterator++;
            cout << "\n";
        } else 
        {
            cout << snack << " ";
            nTmp--;
            while(0 != nTmp) {
                if (findItem(tmp, nTmp, iterator))
                {
                    cout << nTmp << " ";
                    nTmp--;
                } else 
                {
                    break;
                }
            }
            cout << "\n";
        }
    }

    return 0;
}
