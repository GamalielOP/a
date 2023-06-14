#include<stdio.h>
void func1(void){
	puts("Segunda funcion");
	return ;
}
int func2(){
	puts("Tercera funcion");
	return 0;
}
int main()
{
	puts("Funcion principal");
	func1();
	func2();
	return 0;
}
