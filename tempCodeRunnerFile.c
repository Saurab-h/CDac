#include<stdio.h>

int main()
{  int a=1,num,b;

    printf("enter the number:");
    scanf("%d",&num);
    
    while(num>=1)
    {
    	a=num*a;
    	printf("\n%d*%d =%d",num,b,a);
    	num=num-1;
    	b=a;
	}

	return 0;
}
