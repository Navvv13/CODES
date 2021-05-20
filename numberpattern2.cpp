    1
   23
  345
 4567     
      
      //PRINT THE ABOVE GIVEN PATTERN
      
#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    cout<<endl;
    int i=1;
    while(i<=N){
        int k=1;
        while(k<=N-i)
        {
            cout<<" ";
            k=k+1;
        }
        int col=1;
        int value=i;
        while(col<=i)
        {
            cout<<value;
            value=value+1;
            col=col+1;
            
        }
        cout<<endl;
        i=i+1;
    }
}
