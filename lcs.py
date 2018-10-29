# Use recursive and dynamic programming to test runtime
import numpy as np
import sys
def lcs_recursive(x,y,m,n):
	if m ==0 or n==0:
		return 0
	elif x[m-1] == y[n-1]:
		return lcs_recursive(x,y,m-1,n-1)+1
	else:
		return max(lcs_recursive(x,y,m-1,n),lcs_recursive(x,y,m,n-1))

def lcs_dynamic(x,y):
	m = len(y)
	n = len(x)
	aux_matrix = np.zeros((m+1,n+1),dtype=int)
	for i in range(1,m+1):
		for j in range(1,n+1):
			if x[j-1] == y[i-1]:
				aux_matrix[i][j] = aux_matrix[i-1][j-1] +1
			else:
				aux_matrix[i][j] = max(aux_matrix[i-1][j],aux_matrix[i][j-1])
	return aux_matrix[m][n]
	



X1 = "AGGTAB"
Y1 = "GXTXAYB"
print ("Length of recursive_LCS is", lcs_recursive(X1,Y1,6,7))
print ("Length of dynamic_LCS is",lcs_dynamic(X1,Y1))

print ("Length of dynamic_LCS is",lcs_dynamic(sys.argv[1],sys.argv[2]))

