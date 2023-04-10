#include <stdio.h>
  2 #include "main.h"
  3 #include <stdlib.h>
  4 
  5 /**
  6  * main - a function that multiplies two numbers
  7  * atoi - a function that converts a string to an integer
  8  * @argc: number of arguments
  9  * @argv: array of arguments
 10  *
 11  * Return: 0 (Success), 1 (Error)
 12  */
 13 int main(int argc, char *argv[]) {
 14     /*Check if two arguments were provided*/
 15     if (argc != 3) {
 16         printf("Error\n");
 17         return 1;
 18     }
 19 
 20     /*Get the two numbers from the command line arguments*/
 21     int num1 = atoi(argv[1]);
 22     int num2 = atoi(argv[2]);
 23 
 24     /*Multiply the two numbers and print the result*/
 25     int result = num1 * num2;
 26     printf("%d\n", result);
 27 
 28     return 0;
 29 }
~                                                                                   
~        
