//in this program i have used the approach that is XOR APPROACH
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
    
    int XOR =0;
    for(int i=0;i<n;i++)
{
    XOR= XOR ^arr[i];
}
cout<<"THE REQUIRED ELEMENT THAT IS PRESENT ONLY ONCE IN THE ARRAY IS : " << XOR<<endl;
    
}
