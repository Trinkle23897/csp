#include <cstdio>

int n, x, ans, a[10010];

int main(int argc, char const *argv[])
{
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &x);
		a[x] = 1;
	}
	for (int i = 0; i < 10000; ++i)
		if (a[i] && a[i + 1])
			++ans;
	printf("%d", ans);
	return 0;
}