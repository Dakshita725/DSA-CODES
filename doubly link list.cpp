#include<iostream>
using namespace std;
class GetNode
{
  public:
       int data;
       GetNode *left;
       GetNode *right;
       GetNote()
       {
           right=NULL;
           left=NULL;
       }
}*start=NULL;
void InsertionAtEnd(int item)
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
         while(ptr->right!=NULL)
         {
             ptr=ptr->right;
         }
         ptr->right=temp;
         temp->left=ptr;
     }
 }
void InsertionAtBeg(int item)
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
         temp->right=ptr;
         start=temp;
         ptr->left=temp;
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
            ptr1=ptr1->right;
          for(int i=1;i<=pos-1;i++)
            ptr2=ptr2->right;
         ptr1->right=temp;
         temp->right=ptr2;
         temp->left=ptr1;
}
void display()
 {
     GetNode *temp;
     temp=start;
     cout<<"\nstart->NULL->";
     while(temp!=NULL)
     {
         cout<<temp->data<<"->";
         temp=temp->right;
     }
     cout<<"NULL\n";
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
     while(temp->right->right!=NULL)
        temp=temp->right;
     ptr=temp->right;
      temp->right=NULL;
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
        GetNode *temp,*ptr;
        temp=start;
        ptr=temp;
        temp=temp->right;
        temp->left=start;
        start=temp;
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
            temp=temp->right;
        for(int i=1;i<=pos;i++)
            ptr=ptr->right;
        ptr1=temp->right;
        temp->right=ptr;
        ptr->left=temp;
        free(ptr1);
        ptr1=NULL;
    }
}
void Reverse()
{
    GetNode *ptr;
    ptr=start;
    while(ptr->right!=NULL)
    {
        ptr=ptr->right;
    }
    while(ptr->left!=NULL)
    {
        cout<<ptr->data<<"->";
        ptr=ptr->left;
    }
    cout<<ptr->data<<"\n";
}
int main()
{
   int item ,choice,pos;
   while(1)
   {
   cout<<"1. Insertion at beginning : \n";
   cout<<"2. Insertion at end : \n";
   cout<<"3. Insertion at any specified position : \n";
   cout<<"4. Display : \n";
   cout<<"5. Deletion at end  : \n";
   cout<<"6. Deletion at beg  : \n";
   cout<<"7. Deletion at any  : \n";
   cout<<"8. Reverse a doubly linked list : \n";
   cout<<"9. exit : \n";
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
      case 8: Reverse();
             break;
      case 9: exit(0);
      default:
        cout<<"Invalid choice : ";
   }
   }
   return 0;
}
