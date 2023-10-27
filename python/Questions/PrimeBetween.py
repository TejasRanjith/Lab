# print all prime numbers between a and b
a = int(input("Enter the number A : "))
b = int(input("Enter the number B : "))
for n in range(a,b+1):
    for i in range(2,n+1):
        if i%n!=0:
            condition=True
            break
        