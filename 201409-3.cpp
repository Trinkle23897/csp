#include <cstdio>
#include <cstring>
#include <ctype.h>

int n, c;
char s[110], t[110], t_orig[110];

int main(int argc, char const *argv[])
{
	scanf("%s%d%d", s, &c, &n);
	if (c == 0)
		for (int i = 0; s[i]; ++i)
			s[i] = tolower(s[i]);
	while (n--) {
		scanf("%s", t_orig);
		if (c) {
			if (strstr(t_orig, s))
				puts(t_orig);
		}
		else {
			for (int i = 0; t_orig[i]; ++i) {
				t[i] = tolower(t_orig[i]);
				t[i + 1] = 0;
			}
			if (strstr(t, s))
				puts(t_orig);
		}
	}
	return 0;
}