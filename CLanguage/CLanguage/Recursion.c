#include "Recursion.h"

// Basic Tail Example
void basicTailRecursion(int n)
{
	if (n > 0)
	{
		printf("%d ", n);
		basicTailRecursion(n - 1);
	}
}

// Basic Head Example
void basicHeadRecursion(int n)
{
	if (n > 0)
	{
		basicHeadRecursion(n - 1);
		printf("%d ", n);
	}
}

// Recursive function with static and global variables
int staticVarRecursion(int n)
{
	// Output will be 25 for input 5
	static int x = 0;
	if (n > 0)
	{
		x++;
		return staticVarRecursion(n - 1) + x;
	}
	return 0;
}

void treeRecursion(int n) {
	if (n > 0) {
		printf("%d", n);
		treeRecursion(n - 1);
		treeRecursion(n - 1);
	}
}

void indirectRecursionA(int n) {
	if (n > 0) {
		printf("%d ", n);
		indirectRecursionB(n - 1);
	}
}

void indirectRecursionB(int n) {
	if (n > 1) {
		printf("%d ", n);
		indirectRecursionA(n / 2);
	}
}

int nestedRecursion(int n) {
	if (n > 100)
		return n - 10;
	else
		return nestedRecursion(nestedRecursion(n + 11));
}