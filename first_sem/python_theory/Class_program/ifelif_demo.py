print("======Ticket pricing system======")
Day=input("Enter the weekday:")
Day=(Day) 
price = 250
if Day == "Saturday" or Day == "Sunday":
    Final_price=price+(price*0.25)
else: 
    Final_price = price 
    timing=input('Enter the Show Timing:') 
    timing ==(timing)

if timing == "Morning": 
     time_price =Final_price
elif timing == "Afternoon":
     time_price =Final_price+(price*0.10)
elif timing == "Evening": 
     time_price = Final_price+(price*0.30)  

print('The price:',time_price)
age=input('Enter the Age:')
age=int(age)
if age<5:
     print('Child')
     dis_price=time_price-(price*0.50)    
     print('Ticket price = ',dis_price)
elif age<=59:
     print('Adult')
     dis_price=time_price-(price*0.0)
     print('Ticket price = ',dis_price)
else: 
    age>=60
    print('Senior Citizen')
    dis_price=time_price-(price*0.10)
    print('Ticket price = ',dis_price)
