#include <cstdio>

int n, a[110][110], ans, x1, y1, x2, y2;

int main(int argc, char const *argv[])
{
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		for (int x = x1; x < x2; ++x)
			for (int y = y1; y < y2; ++y)
				a[x][y] = 1;
	}
	for (int i = 0; i < 110; ++i)
		for (int j = 0; j < 110; ++j)
			ans += a[i][j];
	printf("%d\n", ans);
	return 0;
}