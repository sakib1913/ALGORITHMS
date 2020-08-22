#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int ist,int last)
{

int pivot=arr[last];
int i=ist;
for(int k=ist;k<=last-1;k++)
        {
            if(arr[k]<pivot)
            {
                swap(arr[i],arr[k]);
                i++;

            }
        }

swap(arr[i],arr[last]);
return i;
}
void quickSort(int arr[],int low,int high)
{

if(low<high)
    {
        int pi=partition(arr,low,high);
       quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
    }
int main()
{int n;
cout<<"enter the size of array that you want to sort "<<endl;
cin>>n;
int arr[n];
cout<<"enter the eelements of an array "<<endl;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
quickSort(arr, 0, n - 1);
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
return 0;}
