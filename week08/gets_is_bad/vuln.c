#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

int main() {
    char name[16];
    int is_admin = 0;

    gets(name);

    if (is_admin == 1) {
        printf("Greetings administrator\n");
    } else {
        printf("Hello %s\n", name);
    }

    return EXIT_SUCCESS;

}
