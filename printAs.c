#include <stdio.h>
#include <stdlib.h>

/*Simple way to practice C loops. 
Print specific patterns of asterisks based on user input.
 */
int main() {
	char input;
	printf("This program displays different patterns made of asterisks.\n");
	printf("Please pick the pattern you wish to print (a, b, c): \n");
	scanf("%c", &input);
	switch(input) {
		case 'a' :
			printf("**********\n");
			break;
		case 'b' :
			for(int i = 1; i < 11; i++) {
				printf("*\n");
			}
			break;
		case 'c' :
			for(int j = 1; j < 11; j++) {
				printf("*****\n");
			}
			break;
	}
	return EXIT_SUCCESS;
}
