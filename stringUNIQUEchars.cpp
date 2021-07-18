//the method that i have used here is not the most efficient one but here we have done the 
//transversal using two loops (for)
// which in turn leads to the increased time complexity
#include<iostream>
using namespace std;
bool fu(string str)
{
    for(int i=0;i<str.length()-1;i++)
{
    for(int j=i+1;j<str.length()-1;j++)
    {
        if(str[i]==str[j])
        {
            cout<<str[i]<<endl;
            return false;
        }
    }
}
return true;
}

 int main()
 {
     string str;
     getline(cin,str);
     if(fu(str))
     {
         cout<<"STRING HAS UNIQUE CHARACTERS"<<endl;
         
     }
     else
     {
         cout<<"STRING DOES NOT HAS UNIQUE CHARACTERS"<<endl;
     }
     return 0;
 }
