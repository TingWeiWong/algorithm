# Use recursive and dynamic programming to test runtime
def lcs_recursive(x,y,m,n):
	if m ==0 or n==0:
		return 0
	elif x[m-1] == y[n-1]:
		return lcs_recursive(x,y,m-1,n-1)
	else:
		return max(lcs_recursive(x,y,m-1,n),lcs_recursive(x,y,m,n-1))


X = "AGGTAB"
Y = "GXTXAYB"
print ("Length of LCS is ", lcs_recursive(X,Y,6,7))