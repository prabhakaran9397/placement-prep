def left2(S):
	if len(S) > 2:
		return S[2:] + S[:2]
	return S
InStr = raw_input()
print left2(InStr)
