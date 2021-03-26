def func(n,m,x):
    r=x%n
    if r==0:
        return (n-1)*m+x//n
    else:    
        return m*(r-1)+x//n+1
t=int(input()) 
for i in range(t):
    s=input()
    nums=s.split()
    for j in range(3):
        n=int(nums[0])
        m=int(nums[1])
        x=int(nums[2])
    print(func(n,m,x))    
