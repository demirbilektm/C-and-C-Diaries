/*
In the following example, the isprime function will determine whether a number is prime or not.
 If the number is prime, the function returns with a value of 1, if not, it returns with a value of 0. 
 If we use the return statement in a loop, the function terminates and so does the loop. 
 The following example uses the isprime function to write prime numbers from 2 to 1000 side by side.

*/

#include<stdio.h>
#include<math.h>
 
int isprime(int value)
{
	int i;
	for (i = 2; i < value; ++i)
		if (value % i == 0)
			return 0;

	return 1;
}


/*
According to Euclid's theorem, in fact, if the number is not prime
has a multiplier up to its square root. That is, up to the square root of the number
check is sufficient. There is also no need to check the even number.
However, there is a special case for 2. Although 2 is even, it is a prime number.
So we can fix the above isprime function to work more efficiently as follows.
*/

int isprime_euclid_theorem(int value)
{
	int i;
	double value_sqrt;

	if (value % 2 == 0)
		return value == 2;

	value_sqrt = sqrt(value);
	for (i = 3; i <= value_sqrt; i += 2)
		if (value % i == 0)
			return 0;
	return 1;
}

int main(void)
{
	
	int i;

	for (i = 2; i < 1000; ++i)
		if (isprime(i))
			printf("%d ", i);
	printf("\n");
	
	

	int j;
	for (j = 2; j < 1000; ++j)
		if (isprime_euclid_theorem(j))
			printf("%d ", j);
	printf("\n");

	return 0;
}


// Another version of the calculation according to Euclidean theorem

/*
int isprime(int value)
{
	if (value <= 1)
		return 0; // Numbers 1 and smaller are not prime

	if (value == 2)
		return 1; // 2 is prime

	if (value % 2 == 0)
		return 0; // Evens aren't prime

	int i;
	int limit = sqrt(value);   // Limit control to square root
	for (i = 3; i <= limit; i += 2)   // Check only odd numbers
		if (value % i == 0)
			return 0;

	return 1;
}

*/
