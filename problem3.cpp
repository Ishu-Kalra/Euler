#include <stdio.h>
#include <conio.h>


int main ()
{long int i=1;long int c=0;
	for (i=1;i<10000000;i++)
	{
		if(87625999%i==0)
			c=i;
	}
	printf("%ld",c);
	getch();
}
