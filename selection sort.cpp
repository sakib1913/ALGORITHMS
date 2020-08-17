#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n)
{
int min_index=arr[0];
for(int i=0;i<n-1;i++)
{
min_index=i;
for(int j=i+1;j<n;j++)
    {if(arr[min_index]>arr[j])
        {min_index=j;
        }
        }
        swap(arr[min_index],arr[i]);
        }
}
int main()
{
int arr[]={1,5,4,3,2,56,0};
int n=7;
selection_sort(arr,n);
//cout<<arr[1];
for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
