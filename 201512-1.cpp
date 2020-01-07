#include <cstdio>

int n, ans;

int main(int argc, char const *argv[])
{
	scanf("%d", &n);
	while (n > 0) {
		ans += n % 10;
		n /= 10;
	}
	printf("%d\n", ans);
	return 0;
}