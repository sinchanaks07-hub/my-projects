#function to read student data
for i in range(1,4):
    rollno=0
    name=''
    firstmark=0
    secondmark=0            #global value
    thirdmark=0
    average=0
    Percentage=0
    Total=0
    def studentdetails():
        global name,rollno,firstmark,secondmark,thirdmark
        name=input("Enter the name of student:") #reads string type data from keyboard 
        rollno=int(input("Enter the roll number:"))
        firstmark=int(input("Enter mark in first subject:"))
        secondmark=int(input("Enter mark in second subject:"))
        thirdmark=int(input("Enter mark in third subject:"))
        return rollno,name,firstmark,secondmark,thirdmark

#to calculate total mark
    def getTotal():
        global Total
        Total=firstmark+secondmark+thirdmark
        print('The total mark:',Total)

#to calculate average mark in 3 subjects
    def getAverage():
        global average
        average=Total/3
        print('The average:',average)

    def getPercentage():
        global Percentage
        Percentage=Total/300*100
        print('The percentage:',Percentage)
#to determine student grade 
    def findgrade():
        if Percentage>75:
            print('Grade:Distinction')
        elif Percentage>60:
            print('Grade:First Class')
        elif Percentage>=40:
            print('Grade:Second Class')
        else:
            print('Fail')

#to display student result
    def displayStudentDetails():
        print("The total mark:",Total)
        print("The average:",average)
        print("The percentage:",Percentage)

    studentdetails()
    getTotal()  #stores returned value in 'total'
    getAverage()
    getPercentage()
    displayStudentDetails()
    findgrade()

for number in range(1,4):       #return concept
    a,b,c,d,e=studentdetails()
    #stores returned value in 'total'
    Total=getTotal()
    average=getAverage()
    Percentage=getPercentage()
#comes same thing as output
