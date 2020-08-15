#include<bits/stdc++.h>
using namespace std;
int jumpsearch(int arr[],int n,int x)
{
int jump=sqrt(n);
int prev=0;
while(arr[min(jump,n)-1]<x)
{prev=jump;
jump+=sqrt(n);
if(prev>n)
{
return -1;}
}
while(arr[prev]<x)
{
prev++;
if(prev==min(jump,n));
    return -1;
}
if(arr[prev]==x)
    return prev;
return -1;
}
int main()
{

int n;
cout<<"enter n\n";
cin>>n;
int arr[n];
cout<<"enter the elements of an array\n";
for(int i=0;i<n;i++)
{cin>>arr[i];
}
sort(arr,arr+n);///jumb search works like binary search and it's complixity is  O(sqrt(n)).
int ele;
cout<<"enter the element that you want to search\n";
cin>>ele;
int result=jumpsearch(arr,n,ele);
(result==-1)?cout<<"not found":cout<<arr[result]<<" found at "<<result;

}
