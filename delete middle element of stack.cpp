#include<iostream>
#include<string>
using namespace std;
const int capacity=10,capacity2=10;
int top=-1,top2=-1;
int Stack[capacity];
int Stack2[capacity2];
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
int push2(int s)
{
    if(top2==capacity-1)
    {
        cout<<"stack is full \n";
        return 0;
    }
    else
    {
        top++;
       Stack2[top2]=s;
    }

}
int main()
{
    push(11);
    push(22);
    push(33);
    push(44);
    push(55);
    cout<<top;
    int mid=top/2;
    for(int i=top;i>mid;i--)
    {
        push2(Stack[i])
        pop();
    }
    return 0;
}
