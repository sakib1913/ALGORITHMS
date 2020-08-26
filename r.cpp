#include<bits/stdc++.h>
using namespace std;
struct node
{
int data;
node* next;
};
void frontback(node* head,node** a,node** b);
node* Sortsub(node* a,node* b);
void mergesort(node** source)
{node* head=(*source);
node* a;
node* b;
if(head==NULL || (head->next==NULL))
{
return;
}
frontback(head,&a,&b);
mergesort(&a);
mergesort(&b);
(*source)=Sortsub(a,b);
}
node* Sortsub(node* a,node* b)
{
node* result=NULL;
if(a==NULL)
{return b;
}
else if(b==NULL){
return a;
}
if(a->data<=b->data)
{
result=a;
result->next=Sortsub(a->next,b);
}
else
{
result=b;
result->next=Sortsub(a,b->next);
}
return (result);
}
void push(node** root,int data)
{
node* temp=new node;
temp->data=data;
temp->next= (*root);
(*root)=temp;
}

void frontback(node* head,node** frontt,node** backk)
{

node* fast;
node* slow;
slow=head;
fast=head->next;
while(fast!=NULL)
{
fast=fast->next;
if(fast!=NULL)
{
slow=slow->next;
fast=fast->next;
}
}
(*frontt)=head;
(*backk)=slow->next;
slow->next==NULL;
}
void printList(node* hd)
{
    while (hd != NULL) {
        cout << hd->data << " ";
        hd = hd->next;
    }
}
int main()
{node * res=NULL;
node* root=NULL;
push(&root,2);
push(&root,8);
push(&root,7);
push(&root,1);
push(&root,3);
push(&root,9);
mergesort(&root);
///cout<<root->data;
printList(root);

return 0;
}
