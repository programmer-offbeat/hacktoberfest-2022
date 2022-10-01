# Python program to show the prime numbers within a given interval

start = int(input("Enter a starting number for the interval: "))
stop = int(input("Enter a ending number for the interval: "))

print("Prime numbers between", start, "and", stop, "are following:")

for primes in range(start, stop + 1):
   # all prime numbers are greater than 1
   if primes > 1:
       for i in range(2, primes):
           if (primes % i) == 0:
               break
       else:
           print(primes)
