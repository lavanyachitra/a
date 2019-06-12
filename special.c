string=input()
n=0
for j in range(len(string)):
    if(string[j].isdigit()!=True and string[j].isalpha()!=True):
        n=n+1
print(n)
