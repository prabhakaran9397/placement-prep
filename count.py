t = raw_input()
s=0
m=0
l=0
x=0
xx=0
while t!='0':
	if t == "S":
		s=s+1
	elif t == "M":
		m=m+1
	elif t == "L":
		l=l+1
	elif t == "XL":
		x=x+1
	elif t == "XXL":
		xx=xx+1
	t = raw_input()	
print s*150/63
print m*150/63
print l*150/63
print x*150/63
print xx*150/63
