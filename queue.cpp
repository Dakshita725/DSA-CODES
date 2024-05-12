#include<iostream>
using namespace std;
int Rear=-1,Front=0;
const int capacity=10;
int Queue[capacity];
void Insert(int item)
{
    if(Rear==capacity-1)
        cout<<"\nQueue is empty : ";
    else
    {
        Rear++;
        Queue[Rear]=item;
        cout<<"\nInsertion perform successfully\n";
    }
}
void Delete()
{
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
}
void traverse()
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
    int choice,item;

    while(1)
    {
    cout<<"\n1.  Insert operation : \n";
    cout<<"2. Delete operation : \n";
    cout<<"3. Traverse operation : \n";
    cout<<"4. Exit : \n";
    cout<<"\n Enter your choice : ";
    cin>>choice;
    cout<<"\n";
        switch(choice)
        {
        case 1:
            cout<<"\n Enter element you want to insert :";
            cin>>item;
             Insert(item);
              break;
        case 2: Delete();
              break;
        case 3:traverse();
            break;
        case 4: exit(0);
        default:
            cout<<"\n Enter valid choice : ";

        }
    }
    return 0;
}
