n=int(input())

for i in range(1,n+1):
    r,e,c=map(int,input().split())
    if (e-c)>r:print('advertise')
    elif (e-c)<r:print('do not advertise')
    else:print('does not matter')
    