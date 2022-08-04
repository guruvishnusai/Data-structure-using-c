#include<stdio.h>
int linearsearch(int arr[],int size,int key)
{
int i;
for(i=0;i<size;i++){
if(arr[i]==key)
return i;
}
if(i==size)
return -1;
}
int main(){
int arr[10];
printf("enter 10 values:");
int i;
for(i=0;i<10;i++)
scanf("%d",&arr[i]);
int key;
printf("enter element to sreach for: ");
scanf("%d",&key);
if(linearsearch(arr,10,key)==-L)
printf("element not found");
else
printf("element found at %d index",linearsearch(arr,10.key));
return 0;
}