/* declaring and finding highest number in an array */
#include<stdio.h>
int main()
{
int a;
printf("enter the no of elements you want to enter in array");
scanf("%d",&a);
int arr[a];
int b;
printf("enter elements of array");
for(b=0;b<=a;b++){
int c;
scanf("%d",&c);
arr[b]=c;
}

int i,j=0;
for(i=0;i<=a;i++){
if(arr[i]>=j)
j=arr[i];
}
printf("Highest integer in array is %d",j);
return 0;
}
