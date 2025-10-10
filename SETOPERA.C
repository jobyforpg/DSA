#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
int set1[20],set2[20],s1,s2,uni[20],inter[20],diff[20],i,ch;
clrscr();
printf("Enter no.of Element in 1st set");
scanf("%d",&s1);
printf("Enter element in first set(only 0s & 1s)");
for(i=0;i<s1;i++)
{
     scanf("%d",&set1[i]);
}
printf("Enter no.of Elemnet in 2nd set");
scanf("%d",&s2);
for(i=0;i<s2;i++)
{
scanf("%d",&set2[i]);
}
printf("\n1. Union");
printf("\n2. INTERSECTION");
printf("\n3. DIFFERENCE");
printf("\n4. Exit\n");

while(1){
printf("Enter choice\n");
scanf("%d",&ch);
switch(ch){

case 1:
if(s1==s2)
{
printf("Element after Union operation\t");
for(i=0;i<s1;i++){
uni[i]=set1[i]|set2[i];
printf("%d\n",uni[i]);
}
}
else
{
printf("Union not possible.as set are of differnnt size\n");
}
break;

case 2 :
if(s1==s2)
{
printf("Element after insertion operation\t");
for(i=0;i<s1;i++){
inter[i]=set1[i]&set2[i];
printf("%d\n",inter[i]);
}
}
else
{
printf("Intersection not possible.as set are of differnnt size\n");
}
break;

case 3:
if(s1==s2)
{
printf("Element after difference operation\t");
for(i=0;i<s1;i++)
{
diff[i]=set1[i]&~set2[i];
printf("%d\n",diff[i]);
}
}
else
{
printf("difference not possible.as set are of differnnt size\n");
}

break;
case 4:
exit(0);
break;
default:
printf("\n wrong choice, please select a valid choice");
break;
}
}
}