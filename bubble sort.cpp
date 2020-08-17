#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n)
{for(int i=0;i<n-1;i++)
{
bool swapped=false;
for(int j=0;j<n-i-1;j++)
{

if(arr[j]>arr[j+1])
{
swap(arr[j],arr[j+1]);
swapped=true;
}
}
if(swapped==false)
    break;

}
}
int main()
{
int arr[]={7,8,92,3,6};
int n=5;
bubble_sort(arr,n);
for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
return 0;
}
