#include<iostream>
using namespace std;
int Rear=-1,Front=0;
const int capacity=10;
long long int Queue[capacity];
int top=-1;
int Stack[capacity];
int Push(int item)
{
    if(top==capacity-1)
    {
        cout<<"stack is full \n";
        return 0;
    }
    else
    {
        top++;
       Stack[top]=item;
    }

}
void traverse1()
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

void Insert(int item)
{
    if(Rear==capacity-1)
        cout<<"\nQueue is empty : ";
    else
    {
        Rear++;
        Queue[Rear]=item;
    }
}
int Delete()
{
    long long int element=Queue[Front];
    if(Rear==-1)
        cout<<"\nQueue is empty ";
    else
    {
        for(int i=0;i<Rear;i++)
        {
            Queue[i]=Queue[i+1];
        }
        Rear--;
    }
    Push(element);
}
void traverse2()
{
    if(Rear==-1)
        cout<<"\n Queue is empty \n";
    else
    {
        for(int i=0;i<=Rear;i++)
          cout<<Queue[i]<<" ";
          cout<<"\n";
    }
}
int main()
{
    Insert(9587130);
    Insert(7231060);
    Insert(7412019);
    Insert(9664407);
    Insert(9549064);
    Insert(9116996);
    cout<<"\nNumber stored in Queue \n\n";
    cout<<"-------------------------------\n";
    traverse2();
    Delete();
    Delete();
    cout<<"\nAfter numbers deleted from Queue \n\n";
    cout<<"--------------------------------------\n";
    traverse1();
    cout<<"\nPoped into stack \n\n";
    cout<<"-------------------------------\n";
    traverse2();
}
