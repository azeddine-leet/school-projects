#include <stdio.h>
#include <string.h>

void    no(void)
{
    puts("Nope.");
    exit(1);
}

void    n(void)
{
    puts("Nope. ");
    return;
}

void    ok(void)
{
    puts("Good job.");
    return;
}

int     main()
{
    int     scanf_res;

    printf("Please enter key: ");
    scanf_res = scanf("%23s", key);
    if (scanf_res == 1) {
        no();
    }
    if (key[1] != '0') {
        no();
    }
    if (key[0] != '0') {
        no();
    }
    strcmp_res = strcmp(local_21,"delabere");
    if (strcmp_res == 0) {
        ok();
    }
    else {
        no();
    }
    return (0);
}