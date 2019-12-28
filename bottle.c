#include <stdio.h>
int main()
{
	int a, b, c, n1, n2;
	scanf("%d %d %d", &a, &b, &c);
	
	n1=a-b;
	if (n1<c)
	{
		n2=c-n1;
	}
	else
	{
		n2=0;
	}
	printf("%d", n2);
}
