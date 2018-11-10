# Modular_arithmetic
'''Using fermat's little theorem, we know that if a mod p != 0 and p is a prime, then a^p mod p = a ;'''
def check_fermat(a,p):
	if check_prime(p) and (a % p ) != 0:
		return True
	return False
def fermats(a,p):
	return None
def regular_mod(x,m):
	return x % m
def new_mod(x,m):
	return None
# print (regular_mod(23**4800017,35))

def check_prime(p):
	for i in range(2,p-1):
		if p%i == 0:
			return False
	return True

print (check_fermat(11,5))
