#include <cstdio>

int n, x, ans, stack[1010], pos[1010], t;

int main(int argc, char const *argv[])
{
	++t;
	stack[t] = 100000;
	pos[t] = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &x);
		while (t > 1 && stack[t] > x)
			--t;
		++t;
		stack[t] = x;
		pos[t] = i;
		if (ans < x) ans = x;
		for (int j = 1; j < t; ++j) {
			int area = (i - pos[j]) * stack[j + 1];
			if (ans < area)
				ans = area;
		}
	}
	printf("%d\n", ans);
	return 0;
}