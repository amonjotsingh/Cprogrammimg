//basic recursion program just for sake of inderstanding
#include<stdio.h>
int rec (int x,int y)
{
	if(x==0)
		return y;
	else
		return(x-1,x+y);

}
int main()
{
	int a,b;
	printf("enter  numbers x and y ");
	scanf ("%d %d",&a,&b);
	int res=rec(a,b);
	printf("\nresult is %d",res);
	return 0;
}
