#include<stdio.h>
int main(void) 
{
	int n;
	char c;
	int jishu;
	int oushu;
	scanf("%d",&n);
	getchar();

	int b[100]={0};
	int max;

	for(int i=1;i<=n;i++)
	{
		scanf("%c",&c);
		if(c - '0' > 91)
		{
			jishu = 2*(c -96) - 1;
			b[jishu]++; 
		}
		
		else
		{
			oushu=2*(c-64);
			b[oushu]++;
		}
	}
	
	max = b[10];
    for (int i = 1; i <= 52; i++)
    {
        if (b[i] > max)
        {
            max = b[i];
        }
    }
	
		for(int i =max;i>0;i--)
	{
		for(int j=1;j<53;j+=2)
		{
			if(b[j]!=0)
			{
				if(b[j]>=max)
				{
					printf("=");
				}
				else printf(" ");
			}
			
			if(b[j+1]!=0)
			{
				if(b[j]>=max)
				{
					printf("=");
				}
				else printf(" ");
			}
			
		    if(b[j]!=0||b[j+1]!=0)
		    {
		    	printf(" ");
			}
			
		}
		max--;
		printf("\n");
	}
	
	printf("\n");
	
	
}