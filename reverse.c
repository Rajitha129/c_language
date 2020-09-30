#include<stdio.h>
void reverse(int *n)
{
	int r,rev=0;
	while(n)
	{
		r=*n%10;
		*n=*n/10;
		rev=rev*10+r;
	}
	*n=rev;
}
int main()
{
	int n,rev;
	scanf("%d",&n);
	reverse(&n);
	printf("%d",rev);
	return 0;
	
	
}
