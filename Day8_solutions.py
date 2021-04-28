# Enter your code here. Read input from STDIN. Print output to STDOUT
#Take input 'n' which denotes no.of entries in the phone book
n = input()
n = int(n) #parse string into an integer

phoneBook = {}
newPhoneBook = {}

def printval(name):
    if (name in phoneBook):
        print(name,"=",phoneBook[name],sep="")
    else:
        print("Not found")
    
if n>=1:
    line = input()
    name, num = line.split()
    phoneBook = {name:num}
    
    for val in range(n-1):
        line = input()
        name, num = line.split()
        newPhoneBook = {name:num}
        phoneBook.update(newPhoneBook)
        
    while (True):
        try:
            name = input()
            printval(name)
        except:
            break    
         
        
    
