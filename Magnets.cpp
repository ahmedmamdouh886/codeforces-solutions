// Example program
#include <iostream>

using namespace std;

int main()
{
    unsigned int n, groups = 0;
    
    cin >> n;
    
    if( n == 1 ){
        
        groups++;
    }else{
        
        unsigned int items[n-1];
        
        for(int i = 0;i<n;i++)
            cin >> items[i];
        
        for(int i = 0;i<n;i++)
        {
            if( items[i] != items[i+1] )
                groups++;
        }
        
    }
    
    cout << groups;
    
    return 0;
    
}
