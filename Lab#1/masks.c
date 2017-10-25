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
    char m;
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

