#include <stdio.h>

int main(void)
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10}, sum = 0;
    int *ptr = &array;
    int *p1 = &array[10];
    printf("%d\n", ptr);
    for (ptr; ptr<p1; ptr++)
    {
        printf("%d\n", ptr);
        sum += *ptr;
    }
    printf("The sum is: %i\n", sum);
}