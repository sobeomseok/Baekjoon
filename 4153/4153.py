while True:
    data=list(map(int,input().split()))
    data.sort()
    first=data[0]
    second=data[1]
    third=data[2]
    if first==0 and second==0 and third==0:break
    if first**2+second**2==third**2:print('right')
    else:print('wrong')