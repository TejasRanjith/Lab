import random
g,i = random.randint(1,100),0
default=100
while i<30:
    n = int(input("Enter the number: "))
    if n > g :
        print("\nHigh...\n")
    elif n<g:
        print("\nLow...\n")
    else:
        print(f"\nThat's it... {n}\n\n")
        break
    i+=1
print(f"You Guessed within {i+1} no. of tries....")