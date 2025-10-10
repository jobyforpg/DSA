#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
 int info;
 struct node *ptr;
}*top, *temp, *top1;

int topelement();
void push(int data);
void pop();
void empty();
void display();
void stackCount();
int count=0;
void destroy();
void create();

void main(){
int No,ch,e;
clrscr();
printf("\n 1.push\n 2.pop \n 3.Top \n 4.Empty \n 5.StackCount \n 6.Display \n7.destroy\n 8.Exit\n");
create();
while(1){
printf("Enter the choice:\n");
scanf("%d",&ch);
switch(ch){
 case 1: printf("Enter the data:\n");
	 scanf("%d",&No);
	 push(No);
	 break;
 case 2:pop();
	break;
 case 3: if(top==NULL)
	  {
	   printf("The stack is empty\n");
	  }
	  else{
	    e=topelement();
	    printf("The  Top element in the stack is :%d \n",e);
	  }
	  break;
case 4:empty();
       break;
case 5:stackCount();
	break;
case 6: display();
	break;
case 7: destroy();
	break;
case 8: exit(0);

}
}
}
void create(){
top=NULL;
}
int topelement(){
 return (top->info);
}

void push(int data){
 if(top==NULL){
 top=(struct node*)malloc(sizeof(struct node));
 top->ptr=NULL;
 top->info=data;

 }

else{
 temp=(struct node*)malloc(sizeof(struct node));
 temp->ptr=top;
 temp->info=data;
 top=temp;
}
count++;
}

void pop()
{
 top1=top;
 if(top1==NULL){
  printf("Error:Typing to pop from empty stack\n");
  return;
 }
 else{
   top1=top1->ptr;
   printf("popped value=%d\n",top->info);
   free(top);
   top=top1;
   count--;
 }
}
void stackCount(){
 printf("The number of elementt in stack=%d\n",count);
}

void display(){
top1=top;
if(top1==NULL){
printf("Stack is empty\n");
return;
}
printf("The stack elements are :\n");

while(top1!=NULL)
{
 printf("%d\n",top1->info);
 top1=top1->ptr;
}

}
void empty(){
 if(top==NULL){
   printf("Stack is empty\n");

 }
 else{
   printf("Stack is not empty and cotains %d elements\n",count);
 }
}



void destroy(){
   printf("Hello JOBY");
}