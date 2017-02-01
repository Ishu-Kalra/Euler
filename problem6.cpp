#include <stdio.h>
#include <conio.h>

int main()
{
	int sq=0;
	int sum=0;

	for (int i=1;i<=100;i++)
	{
		sum=sum + i;
		sq=sq + i*i;
	}
	int res=sq-sum*sum;
	printf("%d",res);
	getch();
}
