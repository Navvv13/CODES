
#include<iostream>
using namespace std;
#include<algorithm>
void merge(long long arr1[], long long arr2[], long long n, long long m) 
        { 
            // code here 
            long long i=n-1;
            long long j=0;
            
            while(i>=0 && j<m){
                if(arr1[i]>=arr2[j]){
                    swap(arr1[i],arr2[j]);
                }
                i--;
                j++;
            }
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
            for(int p=0;p<n;p++){
                cout<<arr1[p]<<" ";
            }
            
            for(int q=0;q<m;q++){
                cout<<arr2[q]<<" ";
            }
        } 
        
        int main()
        {
            long long  n=5;
            long long m=6;
            long long  arr1[] = {1,5,8,13,17};
            long long arr2[]={2,7,10,16,30,40};
            merge(arr1,arr2,n,m);
            
        }
