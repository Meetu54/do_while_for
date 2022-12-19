#include<stdio.h>
main()

{
	
	int f;
	int n;
	
	printf("enter the value : ");
	scanf("%d",&n);
	
	for(f=1; f<=10; f++) {
		
		printf("%d*%d=%d\n",n,f,n*f);
	
	}
}
