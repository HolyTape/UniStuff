#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	float num;
	char t;
	scanf("%f", &num);
	while (getchar() != '\n') t = getchar();
	if (t == 'K')
	{
		printf("%.2f%c%c\n", num-273.15, ' ', 'C');
		printf("%.2f%c%c\n", ((num-273.15)*1.8+32), ' ', 'F');		
	}
	else if(t == 'F')
	{
		printf("%.2f%c%c\n", (num-32)/1.8, ' ', 'C');
		printf("%.2f%c%c\n", (num-32)/1.8+273.15, ' ', 'K');
	}
	else if (t == 'C')
	{
		printf("%.2f%c%c\n", (num*1.8+32), ' ', 'F');
		printf("%.2f%c%c\n", num+273.15, ' ', 'K');
	}
	else if (t != 'K' && t != 'F')
	{
		printf("%.2f%c%c\n", num, ' ', 'C');
		printf("%.2f%c%c\n", (num*1.8+32), ' ', 'F');
		printf("%.2f%c%c\n", num+273.15, ' ', 'K');
	}
	
}
