def func(s):
    count=0
    i=0
    for c in s:
        if c=='(':
            i+=1
        else:
            i-=1
        if i<0:
            count+=1
            i=0   
    return count
t=int(input())
for i in range(t):
    n=int(input())
    s=input() 
    print(func(s))      
