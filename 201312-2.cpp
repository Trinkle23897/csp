#include <cstdio>
char a[10], y;
int main(int argc, char const *argv[])
{
	scanf("%c-%c%c%c-%c%c%c%c%c-%c", a, a+1, a+2, a+3, a+4, a+5, a+6, a+7, a+8, a+9);
	for (int i = 0; i < 9; ++i)
		y = (y + (a[i] - '0') * (i + 1)) % 11;
	if (y == 10) y = 'X';
	else y = y + '0';
	if (y == a[9]) printf("Right\n");
	else printf("%c-%c%c%c-%c%c%c%c%c-%c\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], y);
	return 0;
}