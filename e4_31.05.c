#include <stdio.h>
#include <stdlib.h>
int main()
{
	int m=99, n;
	n= ++m;
    printf("m=%d, n=%d \n",m,n);
    n= ++m;
    printf("m=%d, n=%d \n",m,n);
    printf("m=%d \n",m++);
    printf("m=%d \n",++m);
}
