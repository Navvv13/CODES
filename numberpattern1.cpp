//Program to print a pattern like the one given below
//when n=4 then print the pattern given below
//1
//23
//345
//4567
#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.

*/
    int i, j, k, N;

   cin>>N;
    cout<<endl;
    for(i=1; i<=N; i++)
    {
        k = i;

        // Logic to print numbers
        for(j=1; j<=i; j++, k++)
        {
            cout<<k;
        }

        cout<<endl;
    }

    return 0;
}
