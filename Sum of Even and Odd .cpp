/*Write a program to input an integer N
and print the sum of all its even digits
and sum of all its odd digits separately. */

#include<iostream>
using namespace std;

int main()
{
    int n, se = 0, sd = 0, r;
    cin>>n;

    while ( n> 0)
    {
        r = n % 10;
        if (r % 2 == 0)
        {
          se = se + r;
        }
      else
      {
          sd = sd + r;
      }
        n = n/ 10;
    }

    cout << se << " " <<sd;

    return 0;
}


