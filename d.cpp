#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    int arr[5];
    cout<<"Enter array elements : ";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];

    }

    for(int i=0,j=4;i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    cout<<"Enter array elements : \n";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n Binary to decimal number are : ";

    return 0;
}*/
/*int main()
{
    int arr[5];
    cout<<"Enter array elements : ";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];

    }
    sort(arr,arr+5);
    cout<<"\n sorted array : ";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
     sort(arr,arr+5,greater<int>());
    cout<<"\n sorted array : ";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\n Maximum Element : "<<*max_element(arr,arr+5);
    cout<<"\n Minimum Element : "<<*min_element(arr,arr+5);
    return 0;
}*/
int factorial(int num)
{
    if(num==0 | num==1)
        return 1;
    else
        return num*factorial(num-1);
}
int main()
{
    /*int n=5,fact=1;
    while(n>0)
    {
        fact=fact*n;
        n--;
    }
    cout<<"factorial "<<fact;
    cout<<"\nfactorial "<<factorial(6);*/
    int a[]={1,2,6,5,3};
    int res=a[0]^a[1]^a[2]^a[3]^a[4]^1^2^3^4^5^6;
    cout<<res;

    return 0;
}
