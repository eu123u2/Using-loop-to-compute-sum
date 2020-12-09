/*Ezigbo Ugochukwu 11/5/2020 This proram calculates a specific summation*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	/*Declare variables*/
	int n, counter;
	float sum;
	
	/*Get input value*/
	printf("Enter a positive integer:");
	scanf("%d", &n);
	
	/*Error check*/
	while(n<=0)
	{ 
		printf("Invalid input. The number of terms must be a positive integer. \n");
		printf("Try again - Enter a positive integer:");
		scanf("%d", &n);
	}
	
	/*Calculate*/
	counter = 1;
	sum = 0;
	while(counter<=n)
	{ 
		sum = sum + (1.0/pow(counter,2));
		counter++;
	}

	/*Display*/
	printf("The sum is %f. \n", sum);
	system("pause");
	return 0;
}

/*Enter a positive integer:-2
Invalid input. The number of terms must be a positive integer.
Try again - Enter a positive integer:-2
Invalid input. The number of terms must be a positive integer.
Try again - Enter a positive integer:-2
Invalid input. The number of terms must be a positive integer.
Try again - Enter a positive integer:-2
You have failed too many times. /nPress any key to continue . . .

Enter a positive integer:3
The sum is 14.

Enter a positive integer:6
The sum is 91.*/
