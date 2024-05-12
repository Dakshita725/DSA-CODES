#include<iostream>
using namespace std;
class GetNode
{
  public:
       int data;
       GetNode *left;
       GetNode *right;
       GetNode(int key)
       {
           right=NULL;
           left=NULL;
           data=key;
       }
}*root=NULL;
GetNode *insertT(GetNode *r, int key){

  if (r==NULL)
    {
    r=new GetNode(key);
    return r;
    }

  else if (r->data>key)
 {
   r->left=insertT (r->left, key);
 }
  else{
        r->right=insertT(r->right,key);
      }
  return r;
}
void Insert(int key)
{
    root=insertT(root,key);
    cout<<"\n data inserted..\n";
}
void inorderT (GetNode *root){

if (root!=NULL) {

inorderT(root->left);
cout<<root->data<<"->";
inorderT(root->right);

}

}
void Inorder(){

cout<<"Inorder Traversing";

inorderT(root);

}
void preorderT (GetNode *root){

if (root!=NULL) {
cout<<root->data<<"->";
preorderT(root->left);
preorderT(root->right);

}

}

void Preorder(){

cout<<"\nPreorder Traversing\n";

preorderT(root);

}
void postorderT(GetNode *root){

if (root!=NULL) {
postorderT(root->left);
postorderT(root->right);
cout<<root->data<<"->";
}

}
void Postorder(){

cout<<"\nPostorder Traversing\n";
postorderT(root);
}

int minValue(GetNode *root) {

int minValuee=root->data;

while (root->left!= NULL) {

minValuee = root->left->data;

root = root->left;

}

return minValuee;

}

GetNode *Delete(GetNode *root,int key)
{
if (root==NULL) {

cout<<"Tree is empty..";

return root;
}
if (key<root->data) {

root->left=Delete (root->left, key);
}
else if (key>root->data) {
root->right=Delete(root->right, key);
}

else{
     if (root->left==NULL) {
            return root->right;
}

else if (root->right==NULL) {
        return root->left;
}
// Node with two children: Get the inorder successor (smallest in the right subtree)

root->data= minValue(root->right);

// Delete the inorder successor

root->right=Delete(root->right, root->data);
}
return root;
}

int main()
{
   int item ,choice,pos;
   while(1)
   {
   cout<<"\n\n------------------------------------------------------\n\n";
   cout<<"\n1. Insertion  : \n";
   cout<<"2. Deletion : \n";
   cout<<"3. Inorder : \n";
   cout<<"4. Preorder : \n";
   cout<<"5. Postorder  : \n";
   cout<<"6. Searching : \n";
   cout<<"7. exit : \n";
   cout<<"Select any choice : ";
   cin>>choice;
   switch(choice)
   {
      case 1:cout<<"Enter item you want to insert : ";
              cin>>item;
              Insert(item);
              break;
      case 2:cout<<"Enter item you want to delete : ";
              cin>>item;
              Delete(root,item);
              break;
      case 3:Inorder();
              break;
      case 4: Preorder();
              break;
      case 5:Postorder();
             break;
     /* case 6:searching();
             break;*/
      case 7: exit(0);
      default:
        cout<<"\nInvalid choice : \n";
   }
   }
   return 0;
}
