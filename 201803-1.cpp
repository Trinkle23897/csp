#include <cstdio>

int ans, last, act;

int main(int argc, char const *argv[])
{
	while (scanf("%d", &act), act > 0)
		if (act == 2) {
			if (last < 2)
				last = 2;
			else
				last += 2;
			ans += last;
		} else {
			last = 1;
			ans += last;
		}
	printf("%d\n", ans);
	return 0;
}