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

double taylorSeriesUsingHornerRule( int x, int n ) {
	static double result;
	if (n == 0) {
		return result;
	}
	result = 1 + (double)x * result / n;
	return taylorSeriesUsingHornerRule(x, n - 1);
}

double taylorSeriesIterativeMethod(int x, int y) {
	double result = 1;
	int i;
	double numerator = 1;
	double denominator = 1;

	for (i = 1; i <= numerator; ++i) {
		numerator *= x;
		denominator *= i;
		result += numerator / denominator;
	}
	return result;
}

int fibonacci(int n)
{
	if (n <= 1) {
		return n;
	}
	return fibonacci(n - 2) + fibonacci(n - 1);
}

int fibonacciIterative(int n)
{
	int term1 = 0, term2 = 1, result = 0;
	if (n <= 1) {
		return n;
	}
	for (int i = 2; i <= n; ++i) {
		result = term1 + term2;
		term1 = term2;
		term2 = result;
	}
	return result;
}