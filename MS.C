 #include<stdio.h>
 #include<conio.h>

 void main(){
 int a[5],b[5],c[10],i,j,k,temp;
 clrscr();

 // input array and b
 printf("\nARRAY OF A");
 for(i=0;i<5;i++){
  printf("\nenter a[%d]: ",i);
  scanf("%d",&a[i]);
 }
 printf("\nARRAY OF B");
 for(j=0;j<5;j++){
  printf("\nenter a[%d]: ",j);
  scanf("%d",&b[j]);
 }

// sorting a and b variable
  for(i=0;i<5-1;i++){
  for(j=i+1;j<5;j++){
   if(a[i] > a[j]){
    temp=a[j];
    a[j]=a[i];
    a[i]=temp;
    }
   }
  }
  for(i=0;i<5-1;i++){
  for(j=i+1;j<5;j++){
   if(b[i] > b[j]){
    temp=b[j];
    b[j]=b[i];
    b[i]=temp;
    }
   }
   }

 i=j=k=0;
 while(i<5 && j<5){
 if(b[j] > a[i])
 {
  c[k]=a[i];
  i++;k++;
 }

 if(a[i] > b[j])
 {
  c[k]=b[j];
  j++;k++;
 }
 }
 while(i<5)
 {
 c[k]=a[i];
 i++;k++;
 }
 while(j<5)
 {
 c[k]=b[j];
 j++;k++;
 }

 // printing c values
 for(k=0;k<10;k++){
 printf("\n array c[%d]: %d",k,c[k]);
 }
 getch();
 }
