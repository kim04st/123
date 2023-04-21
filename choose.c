#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int i, r;
	int h[6]={0,};
	srand(time(NULL));
	
	for(i=0; i<6000; i++)
	{
		r=rand();
		r = r % 6; //printf("%d ",r);
		h[r] = h[r] + 1;
	}
	printf("\n\n");
	
	for(i=0; i<6; i++)
	{
		printf("%d = %d\n",i+1,h[i]);
	}
}