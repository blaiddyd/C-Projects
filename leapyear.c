#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//A leap year is either be divisible by 400, or divisble by 4 but not by 100.

int main(int argc, char *argv[]) {
	if(argc != 2) {
		printf("Please only enter one year.\n");
		return EXIT_FAILURE;
	}
	int inputYear = atoi(argv[1]);
	if(inputYear % 400 == 0) {
		printf("%d is a leap year!\n", inputYear);
	}
	else if(inputYear % 4 == 0 && inputYear % 100 != 0) {
		printf("%d is a leap year!\n", inputYear);
	}
	else {
		printf("%d is not a leap year :(\n", inputYear);
	}
	return EXIT_SUCCESS;

}
