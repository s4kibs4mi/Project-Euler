#include<stdio.h>
#include<stdlib.h>
int tri(int tri_numb)
{
	int i,tri=0;
	for(i=1;i<=tri_numb;i++)
	{
		tri+=i;
	}
	return tri;
}
int factor(int number)
{
	int h=number/2,c=1,i;
	for(i=1;i<=h;i++)
	{
		if(number%i==0)
			c++;
	}
	return c;
}

int main()
{
	int i,n=10000000,tringl,c;
	for(i=1;i<=n;i++)
	{
		tringl=tri(i);
		c = factor(tringl);
		if(c>500)
			break;
		printf("%d triangle %d have %d factor\n",i,tringl,c);
	}
	printf("+ %d have %d factor\n",tringl,c);
	return 0;
}
