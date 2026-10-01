n=int(input("Enter the number:"))
total=0
for i in range(1,n+1):
    if i%2==0:
        print(i)
        total= total + i
print('Sum of all even numbers:',total)

#The count of numbers dvisible by both 3 and 5
n=int(input("Enter the number:"))
division=0
for i in range(1,n+1):
    if i%3 == 0 and i%5 == 0:
        print(i)
        division=division + i
print('Count of numbers divisible by both 3 and 5:',division)
#The largest prime number found in range
n=int(input("Enter the number:"))
for j in range(n,1,-1):
    prime = True
    for i in range(2,j):
        if j % i == 0:
            prime = False
            break
    if prime:
            print("Largest prime number:",j)
            break
    
print('division of all even numbers:',division)
#The sum of digits of every number that is a perfect square (e.g., for 16 - 1+6=7)
n=int(input("Enter the number:"))
sum=0
for i in range(1,n+1):
     if int(i**0.5)**2 == i:
          temp=i
          while temp>0:
               sum=sum+temp%10
               temp=temp//10
print("Sum of digits of perfect square:",sum)
#A running total printed every time the total crocess a multiple of 100
n=int(input("Enter the number:"))
total=0
for i in range(1,n+1):
     total=total+i
     if total%100 == 0:
          print(total)
