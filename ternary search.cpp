#include<iostream>
using namespace std;
int tersearch(int arr[],int l,int r,int k)
{
if(r>=l)
{
int mid=l+(r-l)/3;
int midd=mid+(r-l)/3;
if(arr[mid]==k)
    return mid;
if(arr[midd]==k)
    return midd;
if(arr[mid]>k)
    return tersearch(arr,l,mid-1,k);
if(arr[midd]<k)
    return tersearch(arr,midd+1,r,k);
return tersearch(arr,mid+1,midd-1,k);
}
return -1;
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
int result=tersearch(arr,0,(n-1),k);
if(result!=-1)
    cout<<arr[result]<<"found at "<<result;
else
    cout<<"not found";
}

