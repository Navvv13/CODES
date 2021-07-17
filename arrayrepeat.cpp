//in this program im gonna be checking if in the entered array any of the elements occur twice
//if this above condition holds out to be true
// then we will print YES else we will print NO
#include<iostream>
using namespace std;

int main()
{
    int n;
     cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
      }
      
      int rem=0;
      while(n>0)
      {
          rem=n%10;
          if(arr[rem]==1)
          {
              break;
          }
          arr[rem]=1;
          n=n/10;
      }
      
      
      if(n>0)
      {
          cout<<"YES"<<endl;
          
      }
      else
      {
          cout<<"NO"<<endl;
      }
      return 0;
}

