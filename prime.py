start= int(input("enter a number:  "))
end= int(input("enter another number:   "))


for i in range(start,end+1):
    prime=True
    if i <= 1:
        prime = False
    for j in range(2,int(i**0.5)+1):
        if i % j == 0: 
            prime=False
            break
    if prime:
        print(i)
