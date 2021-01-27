string_count=int(input())
string=list(input())
sum=0

for i in range(string_count):
    sum+=int(string[i])
print(sum)