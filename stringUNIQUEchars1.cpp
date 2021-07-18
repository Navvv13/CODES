//here we have used a bit of the optimized appraoch to solve this problm
//WE ARE USING A SORTING ALGO FIRST AND THEN DOING THE WORK
//TIME C :  N log N 
#include<iostream>
#include<algorithm>
using namespace std;
bool fu(string str)
{
    sort(str.begin(),str.end());
    for(int i=0;i<str.length();i++)
    {
        
        if(str[i]==str[i+1])
        
        {
            cout<<str[i]<<"\n";
        return false;    
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
