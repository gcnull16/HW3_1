#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1;

    printf("Enter your score:");
    scanf("%d", &num1);

    if(num1 < 80) {
        printf("C");
    }
getchar();
}
