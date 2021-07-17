#include<iostream>
using namespace std;

int main()
{
   int arr[5][5]={{1, 2, 3, 5, 7}, {4, 9, 6, 5 ,4}, {3, 6, 8, 5, 6}, {4, 5, 6, 17, 2}, {91, 2, 1, 6,8}};
   
  int i,j;
  int sum = 0;

 
    // finding the row sum
    for (i = 0; i < 5; i++) 
    {
        for (j = 0; j < 5; j++) {
 
            // Add the element
            sum = sum + arr[i][j];
        }
 
        // Print the row sum
        cout<<sum<<" ";
 
        // Reset the sum
        sum = 0;
    }
}

