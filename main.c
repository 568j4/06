#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int factorial(int num) {
    if (num <= 1)
        return 1;
    else
        return num * factorial(num - 1);
}

int combination(int n, int r)
{
	int div1, div2;
	
	div1=factorial(n);
	div2=factorial(n-r)*factorial(r);
	
	return (div1/div2);
}

int main(int argc, char *argv[])
{
	int n,r;
	int result;
	
	printf("input n: ");
	scanf("%d", &n);
	
	printf("input r: ");
    scanf("%d", &r);

    result = combination(n, r);
    printf("C(%d, %d) = %d\n", n, r, result);
    
    return 0;

}
