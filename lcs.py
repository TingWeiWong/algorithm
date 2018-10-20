# Use recursive and dynamic programming to test runtime
def lcs_recursive(x,y):
	m = len(x)
	n = len(y)
	if m ==0 or n==0:
		return 0
	elif x[m-1] == y[n-1]:
		m-=1
		n-=1
		return lcs_recursive(x[:-1],y[:-1])
	else:
		return max(lcs_recursive(x[:-1],y),lcs_recursive(x,y[:-1]))


X = "AGGTAB"
Y = "GXTXAYB"
print ("Length of LCS is ", lcs_recursive(X,Y))
a = [1,2,3,4]
print (a[:-1])
