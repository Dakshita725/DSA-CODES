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
void Insert(int item)
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
         while(ptr->link!=NULL)
         {
             ptr=ptr->link;
         }
         ptr->link=temp;
     }
 }
 void Delete()
{
    if(start==NULL)
    {
        cout<<"Linked list is empty : ";
    }
    else
    {
        GetNode *temp,*ptr;
        temp=start;
        ptr=temp;
        temp=temp->link;
        start=temp;
        free(ptr);
        ptr=NULL;
    }
}
void traverse()
 {
     GetNode *temp;
     temp=start;
     cout<<"\nstart->";
     while(temp!=NULL)
     {
         cout<<temp->data<<"->";
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
