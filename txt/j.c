#include <stdio.h>
int main (void) //打一个圆

{
	int i;
	int j;
	char s[20][20]={0};
	for (i=0;i<20;i++)
	{
		for (j=0;j<20;j++)
			{
				if ((i-10)*(i-10)+(j-10)*(j-10)<=16)
				printf("*");
				else printf(" ");
				if (j==19) printf("\n");
			}
	}
}

