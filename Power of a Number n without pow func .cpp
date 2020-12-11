/*Write a program to find x to the power n (i.e. x^n).
 Take x and n from the user. You need to print the answer. */

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,n;
    int ans=1;
    cin>>x;
    
    cin>>n;
    while(n>0)
    {
    	ans=ans*x;
    	n--;
    	
	}
	cout<<ans<<endl;
    
    return 0;
    
}
