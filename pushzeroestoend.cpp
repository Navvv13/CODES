void pushZeroesEnd(int *arr, int n)
{
    //Write your code here
     int count = 0;  
  
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0) 
        {
            arr[count++] = arr[i]; 
        }
    }
    while (count < n) 
    {
        arr[count++] = 0; 
    }
}

#include <iostream>
using namespace std;



int main()
{

	int t;
	cin >> t;
	
	while (t--)
	{

		int size;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		pushZeroesEnd(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}
