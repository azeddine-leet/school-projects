#include <stdio.h>
#include <string.h>

void    ___syscall_malloc(void)
{
    puts("Nope.");
    exit(1);
}


int     main()
{
    int     var00;    // are 4 bytes
    int     scanf_res;    // are 4 bytes
    int     var01;    // are 4 bytes
    int     var02;  // are 8 bytes
    char    buf[9];
    char    key[23];



    var = 0;
    printf("Please enter key: ");
    scanf_res = scanf("%23s", key);
    if (scanf_res != 1) {
        ___syscall_malloc();
    }
    if (key[1] != '2') {
        ___syscall_malloc();
    }
    if (key[0] != '4') {
        ___syscall_malloc();
    }
    fflush(stdin);
    memset(buf, 0, 9);
    buf[0] = '*';
    var02 = 2;
    var01 = 1;
    strlen(buf);







    --------------------
    strcmp_res = strcmp(local_29,"********");
    if (strcmp_res == -2) {
        ___syscall_malloc();
    }
    else if (strcmp_res == -1) {
        ___syscall_malloc();
    }
    else if (strcmp_res == 0) {
        ____syscall_malloc();
    }
    else if (strcmp_res == 1) {
        ___syscall_malloc();
    }
    else if (strcmp_res == 2) {
        ___syscall_malloc();
    }
    else if (strcmp_res == 3) {
        ___syscall_malloc();
    }
    else if (strcmp_res == 4) {
        ___syscall_malloc();
    }
    else if (strcmp_res == 5) {
        ___syscall_malloc();
    }
    else if (strcmp_res == 115) {
        ___syscall_malloc();
    }
    else {
        ___syscall_malloc();
    }
    return (0);
}