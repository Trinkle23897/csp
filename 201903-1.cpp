#include <cstdio>
#include <algorithm>

int n, a[100010];

int main(int argc, char const *argv[])
{
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		scanf("%d", &a[i]);
	std::sort(a, a + n);

	if (n & 1)
		printf("%d %d %d\n", a[n - 1], a[n / 2], a[0]);
	else {
		int mid = a[n / 2] + a[n / 2 - 1];
		if (mid & 1)
			printf("%d %d.5 %d\n", a[n - 1], mid / 2, a[0]);
		else
			printf("%d %d %d\n", a[n - 1], mid / 2, a[0]);
	}
	return 0;
}