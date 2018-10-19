"""
Input = a list 
Output = integer 
ex. [5,7,4,-3,9,1,10,4,5,8,9,3] >>  5
"""

def LIS(input):
	# Input = list [1,2,....]
	n = len(input)
	for i in range(n):
		for j in range(i-1):
			