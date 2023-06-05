/*05.06.23 03 
Editar , depurar y describir el siguiente codigo
descrbir el resultado*/
int main()
{
	char car;
	puts("ingrese letra");
	scanf("%c",&car); 
	if ((car="A")||(car="B")||(car="C"))
	{
	printf("%c es mayuscula\n",car);
}
	else if((car="a")||(car="b")||(car="c"))
	{
	printf("%c es minuscula\n",car);
}
return 0;	
}
