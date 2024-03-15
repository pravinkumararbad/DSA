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

// Power using recursion. n^m
int exponentsUsingFactorial(int n, int m) {
	if (m == 0) {
		return 1;
	}
	else {
		return n * exponentsUsingFactorial(n, (m - 1));
	}
}

// e^x = 1 + x/1 + x^2/2! + x^3/3! + x^4/4! + nth term
int taylorSeriesUsingRecursion( int x, int n) {
	static int power = 1, factorial = 1;
	int result = 0;
	if (n == 0) {
		return 1;
	}
	else {
		result = taylorSeriesUsingRecursion(x, n - 1);
		power = power * x;
		factorial = factorial * n;
		return result + power / factorial;
	}
}