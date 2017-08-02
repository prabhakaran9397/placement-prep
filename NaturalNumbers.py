Limit	= input()
sum	= 0
i	= 1
while i < Limit:
	if (i%5 == 0) or (i%3 == 0):
		sum = sum + i
	i=i+1
print sum
