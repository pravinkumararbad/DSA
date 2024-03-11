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
	// Output will be 25
	static int x = 0;
	if (n > 0)
	{
		x++;
		return staticVarRecursion(n - 1) + x;
	}
	return 0;
}