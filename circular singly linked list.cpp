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
void InsertionAtBeg(int item)
{
   GetNode *temp=new GetNode();
     temp->data=item;
     if(start==NULL)
     {
         start=temp;
         temp->link=start;
     }
     else
     {
         GetNode *ptr1;
         ptr1=start;
         while(ptr1->link!=start)
            ptr1=ptr1->link;
         GetNode *ptr;
         ptr=start;
         temp->link=ptr;
         start=temp;
         ptr1->link=start;
     }
}
void InsertionAtAny(int item,int pos)
{
    GetNode *temp=new GetNode();
    temp->data=item;
         GetNode *ptr1,*ptr2;
         ptr1=start;
         ptr2=start;
         for(int i=1;i<=pos-2;i++)
            ptr1=ptr1->link;
          for(int i=1;i<=pos-1;i++)
            ptr2=ptr2->link;
         ptr1->link=temp;
         temp->link=ptr2;
}
 void InsertionAtEnd(int item)
 {
     GetNode *temp=new GetNode();
     temp->data=item;
     if(start==NULL)
     {
         start=temp;
         temp->link=start;
     }
     else
     {
         GetNode *ptr;
         ptr=start;
         while(ptr->link!=start)
         {
             ptr=ptr->link;
         }
         ptr->link=temp;
         temp->link=start;
     }
 }
 void display()
 {
     GetNode *temp;
     temp=start;
     cout<<"\nstart->";
     while(temp->link!=start)
     {
         cout<<temp->data<<"->";
         temp=temp->link;
     }
     cout<<temp->data<<"->Start\n";
 }
 void DeletionAtEnd()
{
    if(start==NULL)
    {
        cout<<"Linked list is empty : ";
    }
    else
    {
     GetNode *temp,*ptr;
     temp=start;
     while(temp->link->link!=start)
        temp=temp->link;
     ptr=temp->link;
      temp->link=start;
      free(ptr);
      ptr=NULL;
    }
}
void DeletionAtBeg()
{
    if(start==NULL)
    {
        cout<<"Linked list is empty : ";
    }
    else
    {
        GetNode *temp,*ptr,*ptr1;
        ptr1=start;
        while(ptr1->link!=start)
            ptr1=ptr1->link;
        temp=start;
        ptr=temp;
        temp=temp->link;
        start=temp;
        ptr1->link=start;
        free(ptr);
        ptr=NULL;
    }
}
void DeletionAtAny(int pos)
{
    if(start==NULL)
    {
        cout<<"Linked list is empty : ";
    }
    else{
        GetNode *temp,*ptr,*ptr1;
        temp=start;
        ptr=start;
        for(int i=1;i<=pos-2;i++)
            temp=temp->link;
        for(int i=1;i<=pos;i++)
            ptr=ptr->link;
        ptr1=temp->link;
        temp->link=ptr;
        free(ptr1);
        ptr1=NULL;
    }
}
int main()
{
   int item ,choice,pos;
   while(1)
   {
   cout<<"\n\n---------------------------------------------------------------\n\n";
   cout<<"1. Insertion at beginning : \n";
   cout<<"2. Insertion at end : \n";
   cout<<"3. Insertion at any specified position : \n";
   cout<<"4. Display : \n";
   cout<<"5. Deletion at end  : \n";
   cout<<"6. Deletion at beg  : \n";
   cout<<"7. Deletion at any X : \n";
   cout<<"8. exit : \n";
   cout<<"Select any choice : ";
   cin>>choice;
   switch(choice)
   {
      case 1:cout<<"Enter item you want to insert : ";
              cin>>item;
              InsertionAtBeg(item);
              break;
      case 2:cout<<"Enter item you want to insert : ";
              cin>>item;
              InsertionAtEnd(item);
              break;
      case 3:cout<<"Enter item you want to insert : ";
              cin>>item;
              cout<<"\n Enter position : ";
              cin>>pos;
              InsertionAtAny(item,pos);
              break;
      case 4: display();
              break;
      case 5:DeletionAtEnd();
             break;
      case 6:DeletionAtBeg();
             break;
      case 7: cout<<"\n Enter position you want to delete : ";
              cin>>pos;
            DeletionAtAny(pos);
             break;
      case 8: exit(0);
      default:
        cout<<"Invalid choice : ";
   }
   }
   return 0;
}
