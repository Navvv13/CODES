//link of the problem
//https://www.codechef.com/CCSTART2/problems/SQALPAT

#include <iostream>
using namespace std;

int main() 
{

int n;
    cin>>n;
    int start = 0;
    for(int i=0;i<n;i++)
    
    {
        if(i%2==0)
        
        {
            for(int j=1;j<=5;j++)
            
            {
                cout<<start+j<<" ";
            }
        
            
        }
        
        
        else
        {
            for(int j=5;j>=1;j--)
            
            {
                cout<<start+j<<" ";
            
                
            }
        }
        start+=5;
        cout<<"\n";
    }
}
