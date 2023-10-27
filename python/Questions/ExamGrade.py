# S=10,A=>9,B=>8,c=>7,d=>6,e=>5,f=<5
n,i,grades = int(input("Enter the number of subjects : ")),0,[]
while i<n:
    score = int(input(f"Enter the score of Subject {i+1} : "))
    if score<=100:
        if score == 100:
            grades.append("S")
        elif score >= 90:
            grades.append("A")
        elif score >= 80:
            grades.append("B")
        elif score >= 70:
            grades.append("C")
        elif score >= 60:
            grades.append("D")
        elif score >= 50:
            grades.append("E")
        else:
            grades.append("F")
    else:
        print("Invalid Score. Out of 100....")
        i-=1
    i+=1
print(grades)

