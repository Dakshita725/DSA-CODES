#include<iostream>
#include<string>
using namespace std;
const int capacity=10;
int top=-1;
char Stack[capacity];
int push(char s)
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
    string s="Dakshita";
    for(int i=0;i<8;i++)
    {
        push(s[i]);
    }
    traverse();
    return 0;
}
