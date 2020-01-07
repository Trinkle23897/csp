#include <cstdio>
#include <algorithm>

int n, a[1010], x;
struct Data {
	int key, value;
	bool operator < (const Data& a) const {
		if (value != a.value)
			return value > a.value;
		return key < a.key;
	}
} d[1010];

int main(int argc, char const *argv[])
{
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &x);
		++a[x];
	}
	x = 0;
	for (int i = 0; i <= 1000; ++i)
		if (a[i])
			d[x++] = (Data) {i, a[i]};
	std::sort(d, d + x);
	for (int i = 0; i < x; ++i)
		printf("%d %d\n", d[i].key, d[i].value);
	return 0;
}