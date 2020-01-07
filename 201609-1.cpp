#include <cstdio>
#include <algorithm>

int n, last, now, ans;

int main(int argc, char const *argv[])
{
	scanf("%d%d", &n, &last);
	for (int i = 1; i < n; ++i) {
		scanf("%d", &now);
		if (ans < std::abs(last - now))
			ans = std::abs(last - now);
		last = now;
	}
	printf("%d\n", ans);
	return 0;
}