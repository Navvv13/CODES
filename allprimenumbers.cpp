#include <iostream> 

using namespace std; 

int main() {
   int num1 = 2;
    int n;
    cin>>n;
  
   while (num1 <= n)
    {
        int flag = 0;

        for(int i = 2; i <= num1/2; i++)
        {
            if(num1 % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            cout << num1 ;
           num1++;
      cout<<endl;
    }

   return 0;
}
