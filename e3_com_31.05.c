#include <stdio.h>
#include <stdlib.h>
int main()
{
	int m=99, n;
	n= ++m; /*preincremento, comineza en 99 e incrementa uno a m y n =100*/
    printf("m=%d, n=%d \n",m,n);
    n= ++m;/*perincremento, comineza en 100 y incrementa m y n uno, sinedi igual 101*/
    printf("m=%d, n=%d \n",m,n);
    printf("m=%d \n",m++);/*posincremento*comineza en 101 y impreme 101 e incrementa uno m =102/
    printf("m=%d \n",++m);/*preincremento,comineza en 102 e incrementa uno m =103*/
}
