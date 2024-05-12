#include<iostream>
using namespace std;
void selection_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={52,33,41,5,62,17,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,n);
    return 0;
}
