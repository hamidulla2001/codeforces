def solve():
    num=input().split()
    s=input()
    n,k=int(num[0]),int(num[1])
    if not k : 
        print('YES') 
    else :
        if k<<1>=n:
            print('NO')
        elif s[:k]==s[:n-k-1:-1]:
            print('YES')
        else :
            print('NO')             
t=int(input())      
for _ in range(t) :  
    solve()
