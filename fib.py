import math
#for i in range(100):
print int(math.floor(1.618**input()/5**0.5+0.5)%1000000007)

	f[n] = (n & 1)? ((fib(k)*fib(k))%mod+ fib(k-1)*fib(k-1)%mod)%mod
	           : (((2*fib(k-1))%mod+ fib(k)%mod)*fib(k)%mod)%mod;