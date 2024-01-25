#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char name [28];

    printf("What is your name? ");
    scanf("%[^\n]s", name);

    printf ("Hello %s, have a nice day!\n", name);
    return 0;

}