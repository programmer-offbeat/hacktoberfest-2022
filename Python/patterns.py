# Program to print number pattern
rows = 6
# if you want user to enter a number, uncomment the below line
# rows = int(input('Enter the number of rows'))
# outer loop
for i in range(rows):
    # nested loop
    for j in range(i):
        # display number
        print(i, end=' ')
    # new line after each row
    print('')


# Pyramid pattern of numbers
rows = 5
for i in range(1, rows + 1):
    for j in range(1, i + 1):
        print(j, end=' ')
    print('')


# Inverted pyramid pattern of numbers

rows = 5
b = 0
# reverse for loop from 5 to 0
for i in range(rows, 0, -1):
    b += 1
    for j in range(1, i + 1):
        print(b, end=' ')
    print('\r')

# Inverted Pyramid pattern with the same digit
rows = 5
num = rows
# reverse for loop
for i in range(rows, 0, -1):
    for j in range(0, i):
        print(num, end=' ')
    print("\r")
