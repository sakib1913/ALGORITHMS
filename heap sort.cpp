#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[],int n,int i)
{


int lar=i;
int l=2*i+1;
int r=2*i+2;
if(l<n  && arr[l]>arr[lar])
    lar=l;
if(r<n  && arr[r]>arr[lar])
    lar=r;
if(lar!=i)
{
swap(arr[i],arr[lar]);
heapify(arr,n,lar);
}
}
void heapsort(int arr[],int n)
{
for(int i=n/2-1;i>=0;i--)
{
heapify(arr,n,i);
}
for(int i=n-1;i>=0;i--)
{
swap(arr[0],arr[i]);
heapify(arr,i,0);
}
}
int main()
{

int arr[]={1,5,4,3,9};
int n=sizeof(arr)/sizeof(arr[0]);
heapsort(arr,n);
for(int i=0;i<n;i++)
{
cout<<arr[i]<<" "; }
cout<<endl;
///stl for heap sort
/*
make_heap(arr,arr+n);
sort_heap(arr,arr+n);
for(int i=0;i<n;i++)
{
cout<<arr[i]<<" "; }*/
return 0;
}
