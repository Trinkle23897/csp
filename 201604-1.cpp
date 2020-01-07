#include <cstdio>

int n, a[1010], ans;

int main(int argc, char const *argv[])
{
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
		scanf("%d", &a[i]);
	for (int i = 2; i < n; ++i)
		if ((a[i] - a[i - 1]) * (a[i] - a[i + 1]) > 0)
			++ans;
	printf("%d\n", ans);
	return 0;
}