#include <stdio.h>
#include <cbsamplelib.h>

void usage(){
	printf("Select one of the number below to validate a function.\n");
	printf("1. Check whether a number is prime.\n");
	printf("2. Get the sum of squares numbers till.\n");
	printf("3. Get the sum of numbers numbers till.\n");
	printf("4. Get the sum of digits in a number.\n");
	printf("5. Get the product of digits in a number.\n");
	printf("6. Check whether a year is leap year.\n");
	printf("7. Check whether a number is perfect square.\n");
	printf("8. Exit\n");
	printf("Selection: ");
}

int main()
{
	int input, num;
	usage();
  scanf("%d", &input);
	if (input < 1 || input > 8 )
	{
		printf( "Bad input, quitting!\n" );
		return -1;
	}
	else if (input == 8)
	{
		printf( "Thanks for playing!\n" );
		return 0;
	}
	printf("Enter a positive integer (1 - 65535) to be validated: ");
	scanf("%d", &num);
	if ( num < 1 || num > 65536 ){
		printf ("Invalid number entered.\n");
		return -1;
	}
	switch ( input ) {
        case 1:            /* Note the colon, not a semicolon */
          if (is_prime(num) == 1)
            printf("Number %d is prime\n", num);
          else
            printf("Number %d is not prime\n", num);
          break;
        case 2:
          printf("Sum of squares of numbers till %d is %lu\n", num, sum_of_squares(num));
          break;
        case 3:
          printf("Sum of numbers till %d is %lu\n", num, sum_of_numbers(num));
          break;
        case 4:
					printf("Sum of digits in number %d is %lu\n", num, sum_digits(num));
					break;
				case 5:
					printf("Product of digits in number %d is %lu\n", num, product_digits(num));
					break;
				case 6:            /* Note the colon, not a semicolon */
          if (check_leap_year(num) == 1)
            printf("%d is a leap year.\n", num);
          else
            printf("%d is not a leap year.\n", num);
          break;
				case 7:            /* Note the colon, not a semicolon */
          if (is_perfect_square(num) == 1)
            printf("%d is a perfect square.\n", num);
          else
            printf("%d is not a perfect square.\n", num);
          break;
        case 8:
          printf( "Thanks for playing!\n" );
          break;
        default:
          printf( "Bad input, quitting!\n" );
          break;
  }
  getchar();
}
