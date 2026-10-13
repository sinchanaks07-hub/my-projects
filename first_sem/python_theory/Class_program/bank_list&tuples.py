#bank operation using list and tuples
#list inside the tuple:([]) 
#tuple:accountno=1000, name,pancardno,DOB
#list:emailid,contactno,address=place,currentbalance

name=input("Enter the name:")
account_no=int(input("Enter the account numumber:"))
dob=(input("Enter the DOB:"))
pan_no=int(input("Enter the pancard number:"))
email=input("Enter Email ID:")
contact_no=int(input("Enter the contact number:"))
address=input("Enter the Address:")
currentbalance=input("Enter the current balance:")


mylist=[email,contact_no,address,currentbalance]
mytuple=(account_no,name,pan_no,dob,mylist)

print("Customerdetails:",mytuple)
    