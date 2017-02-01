#include <stdio.h>
#include <conio.h>


int main()
{
	int i=2,n=2,p=2,c=0;
	int t=0;


	for ( ; ; i++ )
	{
		if (n%i==0)
		{
			c++;
		}
		if (i>(n+1)/2)
		{
			n++;
			i=2;
			if (c==0)
			{
				c=0;
				p++;
				t=n-1;
			}
			else
			{	
				c=0;
			}

		}
		if (p==10002)
			break;
	}
	printf("The prime number is %d",n);
	getch();
}

