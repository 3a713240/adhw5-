#include<stdio.h>
#include<stdlib.h>

#define f (x+y+z)/(x-y-z)

int main(void){
	
	int x,y,z;
	
	printf("�п�Jx,y,z:");
	
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);

	printf("\nresult:%d\n",f);
	
	system("pause");
	return 0;
}
