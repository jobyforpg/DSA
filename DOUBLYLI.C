#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
struct node *prev;
}*head=NULL,*temp=NULL,*prev=NULL,*newnode=NULL;

void insert();
void delete1();
void display();
void create_node();

void main()
{
int ch,i;
clrscr();
while(1)
{
printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");

printf("\nEnter the choice:\n");

scanf("%d",&ch);

switch(ch){
case 1:
  insert();
  break;
case 2:
   delete1();
   break;
case 3:
 display();
 break;
case 4:
  exit(0);
 default:
    printf("\n Invalid option\n");
    break;
}
}
}
void insert()
{
  if(head==NULL){
     create_node();
     head=newnode;
  }

 else{
  create_node();
  head->prev=newnode;
  newnode->next=head;
  head=newnode;
  }
}

void create_node(){
   newnode=(struct node *)malloc(sizeof(struct node));
   printf("\n Enter the value:\n");
   scanf("%d",&newnode->data);
   newnode->prev=NULL;
   newnode->next=NULL;
}
 void delete1(){
 if(head==NULL){
  printf("\n List is empty\n");
 }
 else{
 temp=head;
 head=head->next;
 head->prev=NULL;
 printf("%d is delete \n",temp->data);
 free(temp);
 }
 }
 void display(){
   if(head==NULL){
   printf("\n List is empty\n");
   }
   else{
    temp=head;
    while(temp!=NULL)
    {
    printf("%d-->",temp->data);
    temp=temp->next;
    }
   }
}

