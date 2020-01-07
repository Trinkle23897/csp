#include <cstdio>

int n, x, last = -1, ans;

int main(int argc, char const *argv[])
{
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &x);
		if (x != last)
			++ans;
		last = x;
	}
	printf("%d\n", ans);
	return 0;
}