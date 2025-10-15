#include<stdio.h>
int main()
{
	int n=123456789;
	while(n>0)
	{
		int ans=n%10;
		if (ans >5)
		{
			printf("Greater: %d \n",ans);
		}
		else
		{
			printf("Lesser : %d \n",ans);
		}
		n/=10;
	}
}
