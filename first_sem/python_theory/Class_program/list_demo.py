marks=['Sachin',50,55,67,76,89]     #declares an list 'marks' to store marks of 'Sachin'
my_mark=[]      #dynamic initialization
sum=0
for number in range(5):
    newMark=int(input("Enter the mark:"))
    my_mark.append(newMark)         # append built in method
print('List elements are:')
for i in range(len(my_mark)):
    print("my mark:",my_mark[i])

for i in range(len(my_mark)):
    sum+=my_mark[i]
print("The total:",sum)