#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp=0;
    int i=1;
    while(i*i<=n)
    {
        temp=i;
        i++;
    }
    cout<<temp<<endl;
    
}
