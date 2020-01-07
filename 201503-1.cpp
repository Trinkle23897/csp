#include <cstdio>

int n, m, a[1010][1010];

int main(int argc, char const *argv[])
{
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			scanf("%d", &a[i][j]);
	for (int j = m - 1; j >= 0; --j) {
		for (int i = 0; i < n; ++i)
			printf("%d ", a[i][j]);
		puts("");
	}
	return 0;
}