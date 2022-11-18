#include<stdio.h>

int main()
{
	int a=10;
	int b=10;
	int c;
	int d=20;
	printf("Comparsion Operators :\n\n");
	
	printf("%d==%d is %d\n",a,b,a==b);
	printf("%d>%d is %d\n",a,b,a>b);
	printf("%d<%d is %d\n",a,b,a<b);
	printf("%d>=%d is %d\n",a,b,a>=b);
	printf("%d<=%d is %d\n",a,b,a<=b);
	printf("%d!=%d is %d\n",a,b,a!=b);
	
	printf("\n\nAssignment Operators :\n\n");
	
	c=a;
	printf(" C = %d\n",c);
	
	c+=a;
	printf(" C = %d\n",c);
	
	c-=a;
	printf(" C = %d\n",c);
		
	c*=a;
	printf(" C = %d\n",c);
	
	c/=a;
	printf(" C = %d\n",c);
	
	c%=a;
	printf(" C = %d\n",c);
	
	printf("\n\nLogic Operators :\n\n");
	
	printf("(a==b) && (d>b) = %d\n",(a==b) && (d>b) );
	printf("(a==b) && (d<b) = %d\n",(a==b) && (d<b) );
	printf("(a==b) || (d<b) = %d\n",(a==b) || (d<b) );
	printf("(a!=b) || (d<b) = %d\n",(a!=b) || (d<b) );
	printf("!(a!=b) = %d\n",!(a!=b));
	printf("!(a==b) = %d\n",!(a==b));

	return(0);
}
