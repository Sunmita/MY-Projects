def factorial(n):
    if n == 0:
        return 1
    else:

        return n * factorial(n-1)

Set= [1,3,6,7,9]
Set1 = []
print("list before replacing",Set)
for n in Set:
    Set1.append(factorial(n))
    Set=Set1
print("list after replacing",Set)