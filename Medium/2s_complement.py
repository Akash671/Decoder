def t2s(str):
	n = len(str)

	# Traverse the string to get first
	# '1' from the last of string
	i = n - 1
	while(i >= 0):
		if (str[i] == '1'):
			break

		i -= 1

	# If there exists no '1' concatenate 1
	# at the starting of string
	if (i == -1):
		return '1'+str

	# Continue traversal after the
	# position of first '1'
	k = i - 1
	while(k >= 0):
		
		# Just flip the values
		if (str[k] == '1'):
			str = list(str)
			str[k] = '0'
			str = ''.join(str)
		else:
			str = list(str)
			str[k] = '1'
			str = ''.join(str)

		k -= 1

	# return the modified string
	return str

s=str(input())
ans=t2s(s)
#print(ans)
def bin_to_dec(n):
  b=1
  d=0
  while(n):
    r=n%10
    d+=r*b
    n=n//10
    b=b*2
  return d

print(bin_to_dec(int(ans)))
