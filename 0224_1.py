#https://atcoder.jp/contests/abc119/tasks/abc119_a

a = input()
b = a.split("/")
if (int(b[0]) <= 2019):
  if(int(b[1])<=4):
    print("Heisei")
else:
  print("TBD")
