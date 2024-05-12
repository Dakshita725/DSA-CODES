#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merge_sort(int arr1[],int arr2[],int arr3[],int n1,int n2)
{
    int i=0,j=0,k=0;
    while(i<n1&j<n2)
    {
        if(arr1[i]<arr2[j])
            arr3[k++]=arr1[i++];
        else
            arr3[k++]=arr2[j++];
    }
    while(i<n1)
    {
        arr3[k++]=arr1[i++];
    }
    while(j<n2)
    {
        arr3[k++]=arr2[j++];
    }
    for(int i=0;i<n1+n2;i++)
    {
        cout<<arr3[i]<<" ";
    }
}
int main()
{
    int arr1[]={2,4,5,6,7};
    int arr2[]={2,6,8,9,5};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int arr3[n1+n2];
    sort(arr1,arr1+n1);
    sort(arr2,arr2+n2);
    merge_sort(arr1,arr2,arr3,n1,n2);

    return 0;
}
