def sumofnaturalno(num):
    if num < 0:
       print("Enter a positive number")
    else:
       sum = 0
       # use while loop to iterate until zero
       while(num > 0):
           sum += num
           num -= 1
       print("The sum is", sum)

n = int(input("Enter the number to find the sum of all number till there. "))
sumofnaturalno(n)

# or Another Method of this problem can be :-

def findSum(num) :
    return num * (num + 1) / 2
n = int(input())
print findSum(n)
