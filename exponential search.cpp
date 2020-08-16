#include<iostream>
using namespace std;
int binarysearch(int arr[],int l,int r,int k)
{

if(r>=l)
{
int mid=l+(r-l)/2;
if(arr[mid]==k)
    return mid;
if(arr[mid]>k)
    return binarysearch(arr,l,mid-1,k);
else
    return binarysearch(arr,mid+1,r,k);
}
return -1;
}
int expsearch(int arr[],int n,int k)
{
if(arr[0]==k)
    return 0;
int i=0;
while(i<n && arr[i]<=k)
{
i++;
//i=i*2;
}
return binarysearch(arr,(i-1),min(i,n),k);
}

int main()
{
int n,k;
cout<<"enter n\n";///number of elements
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"\nenter the number that you want to search\n";
cin>>k;
int result=expsearch(arr,n,k);
if(result!=-1)
    cout<<arr[result]<<"found at "<<result;
else
    cout<<"not found";
}
