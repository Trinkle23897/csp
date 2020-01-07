#include <cstdio>

const int offset = 2;
int n, m, a[40][40], b[40][40];

int main(int argc, char const *argv[])
{
	scanf("%d%d", &n, &m);
	for (int i = offset; i < n + offset; ++i)
		for (int j = offset; j < m + offset; ++j) {
			scanf("%d", &a[i][j]);
			b[i][j] = 1;
		}
	for (int i = offset; i < n + offset; ++i) {
		for (int j = offset; j < m + offset; ++j) {
			if (((a[i - 1][j] == a[i][j]) && (a[i - 2][j] == a[i][j]))
			 || ((a[i + 1][j] == a[i][j]) && (a[i - 1][j] == a[i][j]))
			 || ((a[i + 2][j] == a[i][j]) && (a[i + 1][j] == a[i][j]))
			 || ((a[i][j - 1] == a[i][j]) && (a[i][j - 2] == a[i][j]))
			 || ((a[i][j + 1] == a[i][j]) && (a[i][j - 1] == a[i][j]))
			 || ((a[i][j + 2] == a[i][j]) && (a[i][j + 1] == a[i][j])))
				printf("0 ");
			else
				printf("%d ", a[i][j]);
		}
		puts("");
	}
	return 0;
}