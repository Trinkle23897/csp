#include <cstdio>

int n, a[1010];

int main(int argc, char const *argv[])
{
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
		scanf("%d", &a[i]);
	for (int i = 1; i <= n; ++i)
		if (i == 1)
			printf("%d ", (a[1] + a[2]) / 2);
		else if (i == n)
			printf("%d\n", (a[n - 1] + a[n]) / 2);
		else
			printf("%d ", (a[i - 1] + a[i] + a[i + 1]) / 3);
	return 0;
}