def combo_string (str1, str2):
	if len(str1) > len(str2):
		return str2+str1+str2
	else:
		return str1+str2+str1

in1 = raw_input()
in2 = raw_input()
print combo_string (in1, in2)
