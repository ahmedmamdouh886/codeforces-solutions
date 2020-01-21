#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unsigned int n, bill, result = 1, saving_fifty = 0, saving_twenty_five = 0;
    const unsigned int cost = 25;
    cin >> n;

    while(n--) {
        cin >> bill;
        if (bill == cost)
        {
            saving_twenty_five++;
        }else
        {
            if (100 == bill) {
                if(saving_fifty > 0 && saving_twenty_five > 0) {
                    saving_fifty--;
                    saving_twenty_five--;
                }else if ((saving_fifty == 0 && saving_twenty_five >= 3)){
                    saving_twenty_five -= 3;
                }else{
                    result = 0;
                    break;
                }
            }else if(50 == bill) {
                if(saving_twenty_five == 0) {
                    result = 0;
                    break;
                }

                saving_twenty_five--;
                saving_fifty++;
            }
        }
    }

    if(result == 0)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}
