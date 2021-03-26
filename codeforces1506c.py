def func(a,b):
    length=len(a)
    s=''
    for j in range(length,-1,-1):
        for i in range(length+1):
                
                 if b.find(a[i:j])>=0 and j-i>len(s):
                     s=a[i:j]
                 
                     
    return s                 
t=int(input())
for k in range(t):
    str1=input() 
    str2=input()
    lenstr=len(func(str1,str2))  
    print(len(str1)+len(str2)-(lenstr<<1)) 
