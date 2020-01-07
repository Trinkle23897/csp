#include <cstdio>

int n, a[510][510];

int main(int argc, char const *argv[])
{
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			scanf("%d", &a[i][j]);
	int x = 0, y = 0, dir = 1;
	for (int i = 0; i < n * n; ++i) {
		printf("%d ", a[x][y]);
		if ((dir == 1 && (x == 0 || y == n - 1)) || (dir == 0 && (y == 0 || x == n - 1))) {
			if (dir == 1) {
				if (y == n - 1) ++x;
				else ++y; 
			}
			else {
				if (x == n - 1) ++y;
				else ++x;
			}
			dir = 1 - dir;
		}
		else {
			if (dir == 1) --x, ++y;
			else ++x, --y;
		}
	}
	return 0;
}