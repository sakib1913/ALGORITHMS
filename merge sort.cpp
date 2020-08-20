#include<bits/stdc++.h>
using namespace std;
void mergee(int arr[],int l,int mid,int r)
{
int n1=mid-l+1;
int n2=r-mid;
int temp1[n1],temp2[n2];
for(int i=0;i<n1;i++)
{
temp1[i]=arr[l+i];
}
for(int i=0;i<n2;i++)
{
temp2[i]=arr[mid+i+1];
}
int a=0;
int b=0;
int k=l;
while(a<n1 && b<n2)
{
if(temp1[a]<=temp2[b])
{

arr[k]=temp1[a];
a++;
}
else
{
arr[k]=temp2[b];
b++;
}
k++;
}
while(a<n1)
{
arr[k]=temp1[a];
a++;
k++;
}
while(b<n2)
{
arr[k]=temp2[b];
b++;
k++;
}
}
void mergesort(int arr[],int l,int r)
{
if(l<r)
{int mid=l+(r-l)/2;
mergesort(arr,l,mid);
mergesort(arr,mid+1,r);
mergee(arr,l,mid,r);
}
}
int main()
{

int arr[]={4,5,7,1,2};
int n=sizeof(arr)/sizeof(arr[0]);
mergesort(arr,0,n-1);
for(int i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}
}
