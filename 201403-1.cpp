#include <cstdio>

int pos[1010], neg[1010], n, x, ans;

int main(int argc, char const *argv[])
{
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &x);
		if (x >= 0)
			pos[x] = 1;
		else
			neg[-x] = 1;
	}
	for (int i = 0; i <= 1000; ++i)
		if (pos[i] && neg[i])
			++ans;
	printf("%d\n", ans);
	return 0;
}