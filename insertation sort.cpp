#include<bits/stdc++.h>
using namespace std;
void insertation_sort(int arr[],int n)
{
for(int i=0;i<n-1;i++)
{bool swapped=false;
for(int j=i+1;j<n;j++)
{
if(arr[i]>arr[j])
    {swap(arr[i],arr[j]);
    swapped=true;
    }
}
if(swapped==false)
    break;
}
}
/*void insertation_sort_second_method(int arr[],int n)
{
int i,j;
for(int i=1;i<n;i++)
{int key=arr[i];
j=i-1;
while(j>=0 && arr[j]>key)
{
arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=key;
}
}
*/
int main()
{int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}

insertation_sort(arr,n);
//insertation_sort_second_method(arr,n);
for(int i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}
return 0;
}
