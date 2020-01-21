#include <iostream>

using namespace std;

// using Two Pointers Technique.

int main()
{
    int cards, singleCard, serejaSum = 0, dimaSum = 0, leftPointer = 0, rightPointer;
    bool turn = true;
    cin >> cards;
    
    int allCards[cards];
    
    for( int i = 0;i<cards;i++ )
    {
        cin >> allCards[i];
    }
    
    rightPointer = cards-1;
    
    
    
    while ( leftPointer <= rightPointer ) {
        
        if( allCards[leftPointer] > allCards[rightPointer] )
        {
            
            if( turn ) {
                
                serejaSum += allCards[leftPointer];
                
                
            }else{
                
                dimaSum += allCards[leftPointer];
                
            }
            
            leftPointer++;
            
        }else{
            
            if( turn ) {
                
                serejaSum += allCards[rightPointer];
                
                
            }else{
                
                dimaSum += allCards[rightPointer];
                
            }
            
            rightPointer--;
            
        }
        
        turn = !turn;
        
    }
    
    cout << serejaSum << " " << dimaSum << endl;
    
}
