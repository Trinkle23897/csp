#!/usr/bin/env python3

def main():
	n = int(input())
	for i in range(n):
		ans = eval(input().replace('/', '//').replace('x', '*'))
		print(["No", "Yes"][ans == 24])

if __name__ == '__main__':
	main()