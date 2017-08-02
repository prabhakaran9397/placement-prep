import math
phi= 1.61803399
def fib(n):
	return math.floor((phi**n)/2.23606798 + 0.5)
	
t = input()
for _ in range(t):
	a = map(int, raw_input().split())
	s = (fib(a[1]-a[0]+1)*fib(a[0])+(fib(a[1]-a[0]+2)-1)*fib(a[0]+1))%1000000007
	print int(s)
