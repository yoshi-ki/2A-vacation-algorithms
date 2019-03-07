#https://atcoder.jp/contests/abc120/tasks/abc120_c
a = input()
count0 = 0
count1 = 0
b = len(a)
for i in range(b):
    if(a[i] == "0") :
        count0 = count0 + 1
    else:
        count1 = count1 + 1

print(min(count0,count1)*2)
