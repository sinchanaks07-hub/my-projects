print('=============Electricity Bill==============')

category=input('Enter type of category:')
if category == "comme+rcial":
    print(1)
    u=int(input('Enter the no. of units:'))
    base=100
    if u<=100:
        bill=u*10
    elif(u<=300) and (u>100):
        mid=(u-100)
        bill=(mid*12)+(base*10)
    elif(u>300):
        high=u-400
        mid=u-(base+high)
        bill=(high*15)+(mid*12)+(base*10)
    print('The bill :',bill)

if category == "non commercial":
    u=input('Enter the unit consumed:')
    u=int(u)
    if(u<100):
        bill=u*5
    elif(u<300) and (u>and100):
        mid=(u-100)
        bill=(mid*12)+(base*10)
    else:
        (u>300)
        high=u-400
        mid=u-(base+high)
        bill=(mid*12)+(high*15)+(base*10)
    
    print('Bill:',bill)

threshold=input('Is peak threshold found[yes/no]:')
threshold=(threshold)  
if threshold == "yes":
    surcharge= bill*0.10
    bill=bill+surcharge
payment=input('If payment done before due date[yes/no]:')
payment=(payment)
if payment== 'yes':
        payment=(bill/100*10)
        print('---Discount Available---')                                                                   
        print('Bill of electricity: ',payment)
elif payment=="no":
        payment=bill
        print('---Discount not applied---')
        print('Bill of electricity:',payment)
last=input('===========================================')





