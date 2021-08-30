from Euler import prime_sieve, is_prime
import string
 
def eight_prime_family(prime, rd):
    c=0
    for digit in '0123456789':
        n = int(string.replace(prime, rd, digit))
        if (n>100000 and is_prime(n)):
            c=c+1
    return c==8
 
for prime in prime_sieve(1000000):
    if (prime>100000):
        s = str(prime)
        last_digit = s[5:6]
        if (s.count('0')==3 and eight_prime_family(s,'0') \
         or s.count('1')==3 and last_digit != '1' and eight_prime_family(s,'1') \
         or s.count('2')==3 and eight_prime_family(s,'2')):
             print ("Project Euler 51 Solution: ",s)