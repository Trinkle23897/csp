#include <cstdio>

int n, a[1000010], ans, max = 0, min = 1000000;

int main(int argc, char const *argv[])
{
	scanf("%d", &n);
	for (int i = 0, x, y; i < n * 2; ++i) {
		scanf("%d%d", &x, &y);
		if (y > max) max = y;
		if (x < min) min = x;
		for (int j = x; j < y; ++j)
			++a[j];
	}
	for (int i = min; i < max; ++i)
		if (a[i] == 2)
			++ans;
	printf("%d\n", ans);
	return 0;
}