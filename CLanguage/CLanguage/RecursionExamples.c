#include <stdio.h>

// Sum of first n natural numbers using recursion.
int sumOfFirstNNaturalNumbers(int n) {
	if (n == 0) {
		return 0;
	}
	else {
		return n + (sumOfFirstNNaturalNumbers(n - 1));
	}
}

// Factorial using recursion.
int factorialUsingRecursion(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n * factorialUsingRecursion(n - 1);
	}
}

// Power using recursion
int exponentsUsingFactorial(int n, int m) {
	if (m == 0) {
		return 1;
	}
	else {
		return n * exponentsUsingFactorial(n, (m - 1));
	}
}

void tylorSeriesUsingRecursion() {

}