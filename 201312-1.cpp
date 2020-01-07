#include <cstdio>

int cnt[10010], n, x;
int main(int argc, char const *argv[])
{
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &x);
		++cnt[x];
	}
	x = 0;
	for (int i = 0; i <= 10000; ++i)
		if (x < cnt[i]) {
			x = cnt[i];
			n = i;
		}
	printf("%d\n", n);
	return 0;
}