#include <stdio.h> // ����Լ�
int Factorial(int n)
{
	if (n == 1)
		return 1;
	else
		return Factorial(n - 1) * n;
}
int main()
{
	int result = Factorial(5);

	printf("%d\n", result);
}

#include <stdio.h> // �Ǻ���ġ ����
int Fibonacci(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else 
		return Fibonacci(n-2)+ Fibonacci(n-1);
}
int main()
{
	int result = Fibonacci(5);

	printf("%d\n", result);
}