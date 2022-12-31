#include <stdio.h>

int main(void) {

// 	Initialize the first two terms of the Fibonacci sequence
	int a = 1, b = 2;

// 	Initialize the sum of the even-valued terms to 0
	int sum = 0;

// 	Keep generating new terms in the Fibonacci sequence until the next term exceeds 4,000,000
	while (b <= 4000000) {

// 	If the current term is even, add it to the sum
	if (b % 2 == 0) {
		sum += b;
	}
	
// 	Generate the next term in the sequence by adding the previous two terms
	int c = a + b;

// 	Shift the terms forward so that a becomes b and b becomes c
	a = b;
	b = c;
}
// 	Print the sum of the even-valued terms
	printf("%d\n", sum);
	return 0;
}
