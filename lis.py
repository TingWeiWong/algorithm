"""
Input = a list 
Output = integer 
ex. input = [5,7,4,-3,9,1,10,4,5,8,9,3] >>  6
	lis   = [1,2,1, 1,3,2,4 ,3,4,5,6,3]

Complexity = O(n^2)
"""
def lis_recursive(x):
	n = len(x)
	if n == 1:
		return 1
	else:
		for i in range(n):
			if 



def LIS(x):
	# x = list [1,2,....]
	n = len(x)
	array = [1]*n
	for i in range(1,n):
		for j in range(0,i):
			if x[i]>x[j] and array[i]<array[j]+1:
				array[i] = array[j]+1
	maximum = 0
	for i in range(n):
		maximum= max(array[i],maximum)
	return maximum

test1 = [5,7,4,-3,9,1,10,4,5,8,9,3]
print (LIS(test1))
test2 = [10, 22, 9, 33, 21, 50, 41, 60] 
print (LIS(test2))