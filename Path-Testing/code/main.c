#include <stdio.h>

int main()
{
	int a, b=0, c=10;
	 
	do {
	 printf("Give an integer please:");
	 scanf("%d", &a);
	 } while (a <= 0);
	 
	while (b!=a) { 
	 b++;
	 if (c>a) a++;
	 else c++;
	 }
	 
	if (a==b && c!=b) c++;
	else c=b;
	
	if (c>50) c=c+a;
	
	printf ("Number is %d \n", c);
	
	return 0;
}
