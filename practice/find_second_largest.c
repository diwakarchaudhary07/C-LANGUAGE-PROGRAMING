# Find Second Largest Element

arr = [10, 25, 8, 45, 32]

largest = second = float('-inf')

for num in arr:
    if num > largest:
        second = largest
        largest = num
    elif num > second and num != largest:
        second = num

print("Second Largest Element =", second)