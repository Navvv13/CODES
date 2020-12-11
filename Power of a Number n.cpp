/*Write a program to find x to the power n (i.e. x^n).
 Take x and n from the user. You need to print the answer. */

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,n;
    
    cin>>x;
    
    cin>>n;
    double c=pow(x,n);
    cout<<c;
    cout<<endl;
    
    return 0;
    
}
