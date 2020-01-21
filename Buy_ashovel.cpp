#include <iostream>

using namespace std;

int main()
{
    unsigned short int n, change, number = 1, calc = 0, multiply = 2;
    
    cin >> n >> change;
    calc = n % 10;
    
    if( calc != change && calc != 0 ){
        
        while(true)
        {
            
            calc = n * multiply;
            calc = calc % 10;
            if( calc != change && calc != 0 ){
            
                number++;
            
            }else{
            
                number++;
                break;
            
            }
            
            multiply++;
            
        }
        
    }
    
    cout << number << endl;
    
}
