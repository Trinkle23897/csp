#include <cstdio>
#include <algorithm>

int n, a[1010], ans = 11111;

int main(int argc, char const *argv[])
{
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		scanf("%d", &a[i]);
	std::sort(a, a + n);
	for (int i = 1; i < n; ++i)
		if (ans > a[i] - a[i - 1])
			ans = a[i] - a[i - 1];
	printf("%d\n", ans);
	return 0;
}