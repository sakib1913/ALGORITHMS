#include<iostream>
using namespace std;
int intsearch(int arr[],int n,int k)
{
int left=0;///index of ist element
int right=(n-1);///index of last element
while(left<=right && k>=arr[left] && k<=arr[right])
{
if(left==right)
{
if(k==arr[left])
    return left;
return -1;
}
 int index = left + (((double)(right - left) / (arr[right] - arr[left])) * (k - arr[left]));
 if(arr[index]==k)
    return index;
if(arr[index]<k)
    left=index+1;
else
    right=index-1;
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
int result=intsearch(arr,n,k);
if(result!=-1)
    cout<<"found";
else
    cout<<"not found";
}
