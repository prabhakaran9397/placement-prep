Limit	= 100
i	= 1
while i <= Limit:
	if (i%15 == 0):
		print "FizzBuzz"
	elif (i%5 == 0):
		print "Buzz"
	elif (i%3 == 0):
		print "Fizz"
	else:
		print i
	i=i+1
