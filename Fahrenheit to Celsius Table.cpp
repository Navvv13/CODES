/*Given three values - Start Fahrenheit Value (S), End
Fahrenheit value (E) and Step Size (W), you need to
convert all Fahrenheit values from Start to End at the
gap of W, into their corresponding Celsius values and 
print the table. */

#include<iostream>
using namespace std;


int main()
{
	int s,e,w,i,far;
    cin>>s;
    cin>>e;
    cin>>w;
    
    for(i=s;i<=e;i+=w)
    {
        far=(i-32)/1.8;
        cout<<i<<"\t"<<far<<"\n";
    }
   
  
}
