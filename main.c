#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(int a) { 
	
	int res=1;
	int i;
	for(i=1;i<=a;i++)
		res=res*i;
	
	return res; 
}

int combination(int a, int b) { 
	
	int x,y,z,res;
	
	x=factorial(a);
	y=factorial(b);
	z=factorial(a-b);

	res=x/(y*z);
	
	return res;
}

int main(int argc, char *argv[]) {
	
	int a,b,x;
	
	printf("���� 2���� �Է��Ͻÿ� :");
	scanf("%d %d",&a,&b); 
	x=combination(a,b);
	printf("%d",x); // ���� ���� 0���� ���� 
	
	return 0;
}

