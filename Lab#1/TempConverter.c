#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	float num;
	char t;
	num = atof(argv[1]);
	t = *argv[2];
	while (getchar() != '\n') t = getchar();
	if ((t == 'K') && (argc == 2))
	{
	    if (num < 0) printf("invalid number");
            else
        {
            printf("%.2f%c%c\n", num-273.15, ' ', 'C');
            printf("%.2f%c%c\n", ((num-273.15)*1.8+32), ' ', 'F');
        }
	}
	if((t == 'F') && (argc == 2))
	{
	    if (num < -459.67) printf("invalid number");
            else
        {
            printf("%.2f%c%c\n", (num-32)/1.8, ' ', 'C');
            printf("%.2f%c%c\n", (num-32)/1.8+273.15, ' ', 'K');
        }
	}
	if ((t == 'C') | (argc != 2))
	{
	    if (num < -273.15) printf("invalid number");
            else
        {
            printf("%.2f%c%c\n", (num*1.8+32), ' ', 'F');
            printf("%.2f%c%c\n", num+273.15, ' ', 'K');
        }
	}

}

	
	/*else if (t != 'K' && t != 'F')
	{
		printf("%.2f%c%c\n", num, ' ', 'C');
		printf("%.2f%c%c\n", (num*1.8+32), ' ', 'F');
		printf("%.2f%c%c\n", num+273.15, ' ', 'K');
	}*/


