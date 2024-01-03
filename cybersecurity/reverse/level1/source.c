#include <stdio.h>
#include <string.h>

int main(void)

{
	int cmp_result;
	char correct_key[] = "__stack_check";
	char key[100];

	cmp_result = 0;
	printf("Please enter key: ");
	scanf("%s", key);
	cmp_result = strcmp(correct_key,key);
	if (cmp_result == 0) {
	  printf("Good job.\n");
	}
	else {
	  printf("Nope.\n");
	}
	return 0;
}