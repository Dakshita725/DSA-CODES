#include<iostream>
using namespace std;
class GetNode
{
  public:
       int data;
       GetNode *link;
       GetNote()
       {
           link=NULL;
       }
}*start=NULL;
void push(int item)
{
   GetNode *temp=new GetNode();
     temp->data=item;
     if(start==NULL)
     {
         start=temp;
     }
     else
     {
         GetNode *ptr;
         ptr=start;
         temp->link=ptr;
         start=temp;
     }
}
 void pop()
{
    if(start==NULL)
    {
        cout<<"Linked list is empty : ";
    }
    else
    {
     GetNode *temp,*ptr;
     temp=start;
     while(temp->link->link!=NULL)
        temp=temp->link;
     ptr=temp->link;
      temp->link=NULL;
      free(ptr);
      ptr=NULL;
    }
}void traverse()
 {
     GetNode *temp;
     temp=start;
     cout<<"\nstart\n^\n";
     while(temp!=NULL)
     {
         cout<<temp->data<<"\n^\n";
         temp=temp->link;
     }
     cout<<"NULL\n";
 }
int main()
{
    int choice,item;

    while(1)
    {
    cout<<"\n\n---------------------------------------------------------------\n\n";
    cout<<"\n1. Push operation : \n";
    cout<<"2. Pop operation : \n";
    cout<<"3. display operation : \n";
    cout<<"4. exit : \n";
    cout<<"\n Enter your choice : ";
    cin>>choice;
    cout<<"\n";
        switch(choice)
        {
        case 1:
            cout<<"\n Enter element you want to insert :";
            cin>>item;
             push(item);
              break;
        case 2: pop();
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

