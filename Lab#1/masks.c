#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a = 255;
    char c1 = 0x01,
         c2 = 0x02,
         c3 = 0x04,
         c4 = 0x08,
         c5 = 0x10,
         c6 = 0x20,
         c7 = 0x40,
         c8 = 0x80;
    printf("a = %d\na = ", a);
    (a & c1)? printf("c1 ") : printf("");
    (a & c2)? printf("c2 ") : printf("");
    (a & c3)? printf("c3 ") : printf("");
    (a & c4)? printf("c4 ") : printf("");
    (a & c5)? printf("c5 ") : printf("");
    (a & c6)? printf("c6 ") : printf("");
    (a & c7)? printf("c7 ") : printf("");
    (a & c8)? printf("c8 ") : printf("");
    return 0;
}

/*int main()
{
    char a = 4;
    char c1 = 0x01,
         c2 = 0x02,
         c3 = 0x04,
         c4 = 0x08,
         c5 = 0x10,
         c6 = 0x20,
         c7 = 0x40,
         c8 = 0x80;
    printf("a = %d\nfirst rightmost bit position: ", a);
    if (a & c1) printf("1 ");
        else if (a & c2) printf("2 ");
            else if (a & c3) printf("3 ");
                else if (a & c4) printf("4 ");
                    else if (a & c5) printf("5 ");
                        else if (a & c6) printf("6 ");
                            else if (a & c7) printf("7 ");
                                else if (a & c8) printf("8 ");
                                    else printf("no filled bits");
    return 0;
}

int main()
{
    char a = 17;
    char c1 = 0x01,
         c2 = 0x02,
         c3 = 0x04,
         c4 = 0x08,
         c5 = 0x10,
         c6 = 0x20,
         c7 = 0x40,
         c8 = 0x80;
    printf("a = %d\nthe thing = ", a);

    if (a & c1) printf("1 ");
        else if (a & c2) printf("2, ");
            else if (a & c3) printf("3, ");
                else if (a & c4) printf("4, ");
                    else
                        {
                            printf("no filled bits in first byte, ");
                            if (a & c5) printf("1"); else printf("0");
                            if (a & c6) printf("1"); else printf("0");
                            if (a & c7) printf("1"); else printf("0");
                            if (a & c8) printf("1"); else printf("0");
                        }
    if((a & c1) | (a & c2) | (a & c3) | (a & c4))
    {
        if (a & c5) printf("5 ");
        if (a & c6) printf("6 ");
        if (a & c7) printf("7 ");
        if (a & c8) printf("8 ");
    }

    return 0;
}
 int main()
 {
     int c_a = 0xAC001BED;
     int c_b = 0x0000000F;
     int num = 0x00000000;
     int i;
     printf("%X\n", c_a);
     for (i = 28; i>=0; i-=4)
     {
         num = num | ((c_a & c_b) << i);
         c_a = c_a >> 4;
     }
     printf("%X", num);
 }
 int main()
{

     unsigned int c_a = 0xAC001BED;
     unsigned int c_b = 0x00000001;
     unsigned int c_c = 0x80000000;
     int i;
     printf("%X\n", c_a);
     for (i = 31; i>=0; i--)
     {
         (c_a & c_c) ? printf("1") : printf("0");
         c_c = c_c >> 1;
     }
     printf("\n");
     for (i = 31; i>=0; i--)
     {
         (c_a & c_b) ? printf("1") : printf("0");
         c_b = c_b << 1;
     }
 }
*/
