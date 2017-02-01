#include <stdio.h>
#include <conio.h>


int main()
{
	long int a=1,b=2,c=0;
	long int sum=0;
	while (c < 4000000 )
	{
		c=a +b ;
		a=b;
		b=c;
		if (c % 2==0 )
		{
			sum+=c;
		}
	}
	printf("%ld",sum);
	getch();
}

