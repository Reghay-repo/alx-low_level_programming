int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number @n
 * @n: number
 * * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion_helper(n, 0));
}

/**
 * _sqrt_recursion_helper - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int _sqrt_recursion_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion_helper(n, i + 1));
}
