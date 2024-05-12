#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-1);j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"\n after sorting : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={52,33,41,5,62,17,8};
    int n=sizeof(arr)/sizeof(arr[0]);
     cout<<"\n before sorting : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    bubble_sort(arr,n);
    return 0;
}
