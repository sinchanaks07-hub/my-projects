# a single student data Name,rollno,mobileno,emailid,5 subject marks,get subject total.
#inplemented using nested list.
#function to read student data
stud_mark=[]
total=0    
mark1=0    
mark2=0
mark3=0
mark4=0
mark5=0 
marks=['abcd',111,"email",[mark1,mark2,mark3,mark4,mark5]]


def studentdetails():
        global name,email,rollno,mark1,mark2,mark3,mark4,mark5
        name=input("Enter the name of student:") 
        rollno=int(input("Enter the roll number:"))
        email=input("Enter the Email:")
        mark1=int(input("Enter the first subject mark:"))  
        mark2=int(input("Enter the second subject mark:"))  
        mark3=int(input("Enter the third subject mark:"))  
        mark4=int(input("Enter the fourth subject mark:")) 
        mark5=int(input("Enter the fifth subject mark:"))  
 
#to calculate total mark
def getTotal():
        global Totalmark
        Totalmark=mark1+mark2+mark3+mark4+mark5
def displaystudentdetails():
        print("NAME:",name)
        print("Roll No:",rollno)
        print("Email:",email)
        print("Mark 1:",mark1)
        print("Mark 2:",mark2)
        print("Mark 3:",mark3)
        print("Mark 4:",mark4)
        print("Mark 5:",mark5)

studentdetails()       
getTotal()
print("Total mark:",Totalmark)
displaystudentdetails()










