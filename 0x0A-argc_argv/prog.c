#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Check if two arguments were provided
    if (argc != 3) {
        printf("Error\n");
        return 1;
    }

    // Get the two numbers from the command line arguments
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    // Multiply the two numbers and print the result
    int result = num1 * num2;
    printf("%d\n", result);

    return 0;
}