#include <stdio.h>
#include <stdlib.h>
int Q;
int resultado1;
int resultado2;
int main()
 {
 	int A;
 	A=124;
	 Q=1;
 	resultado1=A+Q;
 	printf("r1:%d\n",resultado1);
 	{
 		int B;
 		int resultado3;
 		B=124;
 		A=457;
 		Q=2;
 		resultado2=A+B+Q;
 		printf("r1a:%d\n",resultado1);
 		printf("r1b:%d\n",resultado2);
 	
	 {
	 	
	 	int C;
	 	C=124;
 		B=457;
 		A=788;
 		Q=3;
 		resultado3=A+B+Q+C;
 		printf("r3:%d\n",resultado3);
	 }
	return 0;
}
}
