#include <cstdio>

int n, cnt[1010], x;

int main(int argc, char const *argv[])
{
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &x);
		printf("%d ", ++cnt[x]);
	}
	return 0;
}