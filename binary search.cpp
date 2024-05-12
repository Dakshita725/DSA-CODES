#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binary_searchh(int arr[],int n,int item)
{
   int lb=0,ub=n-1;
   int mid=(lb+ub)/2;
   for(int i=lb;i<=ub;i++)
   {
       if(arr[mid]<item)
       {
           lb=mid+1;
           mid=(lb+ub)/2;
       }
       else if(arr[mid]>item)
       {
           ub=mid-1;
           mid=(lb+ub)/2;
       }
       else if(arr[mid]==item)
       {
           cout<<"\n Item found successfully : ";
           break;
       }
       else
       {
           cout<<"\n Item not found ";
       }
   }
}
int main()
{
    int arr[]={2,3,4,5,6,7,8},item;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter element you want to search : ";
    cin>>item;
    sort(arr,arr+n);
    binary_searchh(arr,n,item);
    return 0;
}
