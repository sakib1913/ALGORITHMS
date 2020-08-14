#include<bits/stdc++.h>
using namespace std;
int bs_rec(int arr[],int l,int r,int k)
{

if(r>=l)
{int mid=l+(r-l)/2;
if(arr[mid]==k)
    return mid;
else if(k>arr[mid])
    return bs_rec(arr,mid+1,r,k);
else
    return bs_rec(arr,l,mid,k);
}
return -1;
}
int bs_non_rec(int arr[],int l,int r,int k)
{
while(l<=r)
{
int mid=l+(r-l)/2;
if(arr[mid]==k)
    return mid;
else if(k>arr[mid])
    l=mid+1;
else
    r=mid-1;
}
return -1;
}
int main()
{int arr[]={1,4,5,7,2,8};
int n=sizeof(arr)/sizeof(arr[0]);
sort(arr,arr+n);
int k;
cout<<"enter the number that you want to search...recursive binary_search\n";
cin>>k;
int resu=bs_rec(arr,0,n-1,k);
(resu==-1)?cout<<" not found ":cout<<arr[resu]<<" found at "<<resu;
int res=bs_non_rec(arr,0,n-1,k);
cout<<endl;
(res==-1)?cout<<" not found ":cout<<arr[res]<<" found at loctaion "<<res;
}
