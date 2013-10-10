#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i,j,k;
	for(i=0;i<=1000;i++)
	{
		for(j=i+1;j<=1000;j++)
		{
			for(k=j+1;k<=1000;k++)
			{
				if((i+j+k)==1000 && pow(i,2)+pow(j,2)==pow(k,2))
				{
					printf("%d - %d - %d",i,j,k);
					printf(" | %d\n",i*j*k);
				}
			}
		}
	}
	return 0;
}
