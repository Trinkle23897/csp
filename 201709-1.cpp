#include <cstdio>

int n, ans;

int main(int argc, char const *argv[])
{
	scanf("%d", &n);
	n /= 10;
	for (int i = 0; i <= n; i += 3) {
		int now = i / 3 + (n - i) / 5 * 2;
		if (ans < now)
			ans = now;
	}
	printf("%d\n", ans + n);
	return 0;
}