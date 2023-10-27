l=[]
n=int(input("Enter the no. of people : "))
while n>0:
    name=input("Enter the name : ")
    l.append(name.capitalize())
    n-=1
for name in l:
    print(f"Hi, {name}.")