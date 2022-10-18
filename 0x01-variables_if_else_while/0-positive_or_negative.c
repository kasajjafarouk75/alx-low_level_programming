#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * finding if a number is less than zero then print negative;
 * if the number is greater than zero then print positive;
 * if the number is equal to zero then print zero;
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

if
	(n < 0) {printf("is negative"); }

else if
(n > 0) {printf("is positive"); }

else
	(n == 0) {printf("is zero"); }

(return 0);
}
