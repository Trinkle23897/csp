#include <cstdio>
#include <cstring>

char s[10];
int n, num[10], num_t, op[10], op_t;

int pop() {
	if (op[op_t] == '+')
		num[num_t - 1] += num[num_t];
	else if (op[op_t] == '-')
		num[num_t - 1] -= num[num_t];
	else if (op[op_t] == 'x')
		num[num_t - 1] *= num[num_t];
	else if (op[op_t] == '/') {
		if (num[num_t] == 0)
			return -1;
		num[num_t - 1] /= num[num_t];
	}
	--num_t, --op_t;
	return 0;
}

int calc(char *s) {
	num_t = op_t = 0;
	s[strlen(s)] = '+';
	for (int i = 0; s[i]; ++i)
		if ('0' <= s[i] && s[i] <= '9')
			num[++num_t] = s[i] - '0';
		else {
			while (op_t > 0 && ((op[op_t] == 'x' || op[op_t] == '/') && (s[i] == 'x' || s[i] == '/') || s[i] == '+' || s[i] == '-'))
				if (pop() == -1)
					return -99999;
			op[++op_t] = s[i];
		}
	return num[1];
}

int main(int argc, char const *argv[]) {
	for (scanf("%d", &n); n--; puts(calc(s) == 24 ? "Yes" : "No"))
		scanf("%s", s);
}
