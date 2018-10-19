# Fib(0)=0 Fib(1)=1
import timeit 
import sys
import matplotlib.pyplot as plt 
def fib_dynamic(n):
	# Return the nth fib number using dynamic programming 
	n = int(n)
	if n in (0,1):
		return n
	current = 0
	after = 1 
	for i in range(n-1):
		current,after = after,after+current
	return after
def fib_recursive(n):
	n = int(n)
	if n in (0,1):
		return n
	else:
		return fib_recursive(n-1)+fib_recursive(n-2)

input = sys.argv[1]
dynamic_runtime = timeit.timeit("fib_dynamic(input)", setup = "from __main__ import fib_dynamic, input", number=1)
recursive_runtime = timeit.timeit("fib_recursive(input)", setup = "from __main__ import fib_recursive, input", number=1)
ratio = float(recursive_runtime/dynamic_runtime)
print ("Dynamic runtime = ",('{0:.3g}'.format(dynamic_runtime)))
print ("Recursive runtime = ",("{0:.3g}".format(recursive_runtime)))
print ("{0:.3g}".format(ratio))