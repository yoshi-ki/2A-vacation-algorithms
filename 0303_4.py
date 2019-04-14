s = input().split()
N = int(s[0])
M = int(s[1])

#元々の島の行き来の通り数
prime = (N * (N-1))/2

roadlist =[]
roadlist1 = []

for i in range(M):
    s = input().split()
    s1 = [int(s[0]),int(s[1])]
    roadlist1.append(s1)

for i in roadlist1[::-1]:
    roadlist.append(i)

set_list = [roadlist[0]]


ans = []
flag = 0
for road in roadlist:
    if(flag == 1):
        for j in road:
            for k in set_list:
                for l in k:
                    if(l == j):
                        for num in road:
                            for t in k:
                                g = 0
                                if(t == k):
                                    g = 1
                            if (g==0):
                                k.append(num)
                        break
                    break
                break
            break
    else:
        flag = 1

    ans1 = 0
    for i in set_list:
        ans1 = ans1 + ((len(i)) * (len(i) - 1)) / 2
    ans.append(ans1)

answer = []
for i in ans[::-1]:
    print(prime - i)
