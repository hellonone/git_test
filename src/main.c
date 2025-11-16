#include <stdio.h>
#include "test.h"

int main(void)
{
    printf("hello main!\r\n");
    printf(add(3,4 ));
    printf("hello main!\r\n");
    printf(add(5,6));
    printf("hello main!\r\n");
    printf(add(17,8));    
    printf("hello main!\r\n");
    printf(add(19,110));

    printf("hello main!\r\n");
    printf(add(11,12));

    printf("hello main branches!\r\n");
    printf(add(13,14));   

     printf("hello main branches!\r\n");
    printf(add(15,16));    
}