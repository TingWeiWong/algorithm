"""
Input = a list 
Output = integer 
ex. [5,7,4,-3,9,1,10,4,5,8,9,3] >>  6
Complexity = O(n^2)
"""


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