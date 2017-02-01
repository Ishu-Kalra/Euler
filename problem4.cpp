#include <stdio.h>
#include <conio.h>


int main()
{
	int rev=0,d=0,palin=-1,n=0,t=0;
for (int i=100;i<=999;i++)
{
	for (int j=100;j<=999;j++)
	{
		n=i*j;
		t=n;
		while (t!=0)
		{
			d=t%10;
			rev=rev*10 + d;
			t=t/10;
		}
		if (n==rev && n>palin)
			palin=n;
		rev=0;
		d=0;
	}
}
printf("%d",palin);
getch();
}

