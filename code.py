MIN = 1
MAX = 1000000000
SIZE = 10
def check(n):
	m = n
	d = [0 for i in range(SIZE)]
	flag = 0
	while m!=0:
		if((m%10)>=SIZE):
			flag = 0
			break
		d[m%10]+=1
		m/=10
	m = 0
	for i in range(SIZE):
    		m+=d[SIZE-i-1]*(10**i)
	if(m==n):
		flag = 1
	return flag
for i in range(MIN,MAX):
	v = check(i)
	if(v == 1):
		print i
