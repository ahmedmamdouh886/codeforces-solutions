#include <iostream>
#include <string>

using namespace std;

int main()
{
    int cal[4], sumCal = 0;
    string strips;
    
    cin >> cal[0] >> cal[1] >> cal[2] >> cal[3];
    
    cin >> strips;
    
    for(unsigned int i = 0;i<strips.size();i++)
    {
        sumCal += cal[(strips[i]-'0')-1];
    }
    
    cout << sumCal;
    
    return 0;
    
}
