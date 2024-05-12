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
     while(temp->link->link!=NULL)
        temp=temp->link;
     ptr=temp->link;
      temp->link=NULL;
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
        temp=temp->link;
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
            temp=temp->link;
        for(int i=1;i<=pos;i++)
            ptr=ptr->link;
        ptr1=temp->link;
        temp->link=ptr;
        free(ptr1);
        ptr1=NULL;
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
         temp->link=ptr;
         start=temp;
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
 void searching(int item)
 {
     GetNode *temp;
     temp=start;
     int flag=0;
     while(temp->link!=NULL)
     {
         if(temp->data==item)
             flag++;
         temp=temp->link;
     }
     if(flag==1)
        cout<<"\nitem found successfully : \n";
     else
        cout<<"\n item not found \n";
 }
 void display()
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
 void DeletionofMiddle()
 {
     if(start==NULL)
     {
         cout<<"Linked list is empty : ";
     }
     else
     {
       GetNode *temp,*ptr1,*ptr2,*ptr3;
       temp=start;
       ptr1=start;
       ptr2=start;
       int flag=1;
       while(temp->link!=NULL)
       {
         temp=temp->link;
         flag++;
       }
      int mid=(flag+1)/2;
      for(int i=1;i<=mid-2;i++)
        ptr1=ptr1->link;
      for(int i=1;i<=mid;i++)
        ptr2=ptr2->link;
      ptr3=ptr1->link;
      ptr1->link=ptr2;
      free(ptr3);
      ptr3=NULL;
     }
 }
 void RotationOfLinkedList(int k)
 {

 }
int main()
{
   int item ,choice,pos,k;
   while(1)
   {
   cout<<"\n\n---------------------------------------------------------------\n\n";
   cout<<"1. Insertion at beginning : \n";
   cout<<"2. Insertion at end : \n";
   cout<<"3. Insertion at any specified position : \n";
   cout<<"4. Display : \n";
   cout<<"5. Searching : \n";
   cout<<"6. Deletion at end  : \n";
   cout<<"7. Deletion at beg  : \n";
   cout<<"8. Deletion at any X : \n";
   cout<<"9. Deletion of middle element in Linked list : \n";
   cout<<"10. exit : \n";
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
      case 5:cout<<"Enter item you want to search : ";
              cin>>item;
            searching(item);
              break;
      case 6:DeletionAtEnd();
             break;
      case 7:DeletionAtBeg();
             break;
      case 8: cout<<"\n Enter position you want to delete : ";
              cin>>pos;
            DeletionAtAny(pos);
             break;
      case 9:DeletionofMiddle();
             break;
      case 10:cout<<"\n Enter Index upto you want to rotate : ";
              cin>>k;
        RotationOfLinkedList(k);
      case 11: exit(0);
      default:
        cout<<"Invalid choice : ";


   }
   }
   return 0;
}
