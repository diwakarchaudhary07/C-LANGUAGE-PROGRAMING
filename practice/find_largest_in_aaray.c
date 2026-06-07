# Find Largest Element in Array

arr = [10, 25, 8, 45, 32]

largest = arr[0]

for i in arr:
    if i > largest:
        largest = i

print("Largest Element =", largest)