#include <stdio.h>

int main(void)
{
	int i;
	int m, n;
	long m_ = 1, n_ = 1;
	printf("Enter m: ");
	scanf("%d", &m);
	printf("Enter n: ");
	scanf("%d", &n);
	for (i = 1; i <= m; i++)
		m_ *= i;
	for (i = 1; i <= n; i++)
		n_ *= i;
	printf("%d!+%d!=%ld\n", m, n, m_ + n_);
}