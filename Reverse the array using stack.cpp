#include<iostream>
#include<string>
using namespace std;
const int capacity=10;
int top=-1;
int Stack[capacity];
int push(int s)
{
    if(top==capacity-1)
    {
        cout<<"stack is full \n";
        return 0;
    }
    else
    {
        top++;
       Stack[top]=s;
       cout<<"\n push operation perform successfully : \n";
    }

}
int pop()
{
   if(top==-1)
   {
       cout<<"stack is empty : \n";
       return 0;
   }
   else{
      top--;
      cout<<"\n stack poped successfully : \n";
   }
}
void traverse()
{
    if(top==-1)
    {
        cout<<" stack  is empty : ";
    }
    else
    {
        for(int i=top;i>-1;i--)
        {
            cout<<"|_"<<Stack[i]<<"_|"<<endl;
        }
    }

}
int main()
{
    int s[]={1,2,3,4,5,6,7,8};
    int n=sizeof(s)/sizeof(s[0]);
    for(int i=0;i<n;i++)
    {
        push(s[i]);
    }
    traverse();
    return 0;
}
