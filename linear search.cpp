#include<bits/stdc++.h>
using namespace std;
void searchh(int arr[],int n,int x)
{
for(int i=0;i<n;i++)
{
if(arr[i]==x)
{
cout<<i;
}
}
}
int main()
{
int n;
cout<<"enter the length of an array\n";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{cin>>arr[i];
}
int x;
cout<<"enter the number that you want to search\n";
cin>>x;
searchh(arr,n,x);
}
