#include <cstdio>
#include <algorithm>

int n, ans, a[1010], flag;

int main(int argc, char const *argv[])
{
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
		scanf("%d", &a[i]);
	std::sort(a + 1, a + 1 + n);
	for (int l = 1, r; l <= n; l = r + 1) {
		for (r = l; r <= n && a[l] == a[r + 1]; ++r);
		if (l - 1 == n - r) {
			flag = 1;
			printf("%d ", a[l]);
		}
	}
	if (flag == 0)
		puts("-1");
	return 0;
}