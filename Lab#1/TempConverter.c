#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	float num;
	char t;
	num = atof(argv[1]);
	if (argc = 1)
    {
        if (num < -273.15) printf("invalid number");
                else
            {
                printf("%.2f%c%c\n", (num*1.8+32), ' ', 'F');
                printf("%.2f%c%c\n", num+273.15, ' ', 'K');
            }
    }
	else
	{
	    t = *argv[2];

        if (t == 'K')
        {
            if (num < 0) printf("invalid number");
                else
            {
                printf("%.2f%c%c\n", num-273.15, ' ', 'C');
                printf("%.2f%c%c\n", ((num-273.15)*1.8+32), ' ', 'F');
            }
        }
        if(t == 'F')
        {
            if (num < -459.67) printf("invalid number");
                else
            {
                printf("%.2f%c%c\n", (num-32)/1.8, ' ', 'C');
                printf("%.2f%c%c\n", (num-32)/1.8+273.15, ' ', 'K');
            }
        }
        if (t == 'C')
        {
            if (num < -273.15) printf("invalid number");
                else
            {
                printf("%.2f%c%c\n", (num*1.8+32), ' ', 'F');
                printf("%.2f%c%c\n", num+273.15, ' ', 'K');
            }
        }
	}
	return 0;

}
	


