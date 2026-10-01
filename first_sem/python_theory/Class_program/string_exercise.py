#Program to demonstrate real python string processing to clean and transform
# Output formate:
# ==============================
#  PROFILE CARD
# ==============================
#  Name     : Naveen Kumar
#  Initials : NK
#  Email    : naveen.kumar@company.com
#  Domain   : company.com
#  Phone    : *********3210
#  Valid    : True
# ==============================

raw_data = """
   naveen   KUMAR
naveen.kumar@COMPANY.com
+91-98765-43210
"""
print('==================================')
print('PROFILE CARD')
print('==================================')
name,email,phone=raw_data.split("\n")[1],raw_data.split("\n")[2],raw_data.split("\n")[3]
print('Name\t:',name.strip().title())
first,last=name.split()[0],name.split()[1]
initials=first[0].upper()+last[0].upper()
print('Initials:',first[0].upper()+last[0].upper())
print('Email\t:',email.lower())
print('Domain\t:',email.split('@')[1].lower())
print('Phone\t:',phone.replace("-",""))
if len(phone == 10);   
print('Valid\t:',True)
else 

print('===================================')