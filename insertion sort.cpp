#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
          for(int k=j+1;k<=i;k++)
          {
            if(arr[i]<arr[j])
            {
               int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
          }
        }
        cout<<"\n phase "<<i+1<<"\n";
        for(int i=0;i<n;i++)
        {
        cout<<arr[i]<<" ";
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
    insertion_sort(arr,n);
    return 0;
}
