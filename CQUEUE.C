 // circular queue program in c language
#include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>

 #define size 5

 int q[size],f=-1,r=-1;

 void insert();
 void del();
 void display();
 void exit();

 void main(){
   int choice;
   clrscr();
   do{
   clrscr();
   printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n0.EXIT\n");

   printf("\nENTER ANY KEY: ");
   scanf("%d",&choice);

   switch(choice){
    case 1: insert();
    break;
    case 2: del();
    break;
    case 3: display();
    break;
    case 0: exit(1);
    break;
    default: printf("\nENTER BETWEEN 0 TO 3");
   }

   getch();
  }while(choice != 0);

 getch();
 }

 void insert(){
   int no;
   if((f== 0 && r==size-1) || (r ==f-1)){
   printf("\nQUEUE IS FULL...");
   }
   else
   {
    printf("\nENTER ANY VALUE: ");
    scanf("%d",&no);

    if(f == size-1)
    {
     r =0;
    }
    else
    {
      r++;
    }

    q[r]=no;
    printf("\n%d is added sucessfully",q[r]);
    if(f == -1)
    {
     f =0;
     }

   }
 }
 void del(){
 if(f == -1){
 printf("\nQUEUE IS EMPTY");
 }
 else
 {
 printf("%d is delete sucessfully",q[f]);
 if(f ==r)
 {
  f =-1;
  r=-1;
  }
  else{
  if( f== size -1)
  {
   f=0;
  }
  else
   {
   f++;
   }
  }
 }
 }
 void display(){
 int i;
  if(f == -1){
    printf("\nQUEUE IS EMPTY");
    }
    else {
     if(f<= r){
       for(i=f;i<=r;i++){
       printf("%d\t",q[i]);
       }
       }
       else{
       for(i=r;i<size-1;i++)
       {
       printf("%d\t",q[i]);
       }
       for(i=0;i<=f;i++){
       printf("%d\t",q[i]);
       }
       }
      }
 }
