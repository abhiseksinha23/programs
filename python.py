import sys
from itertools import product

c = 0

n,m,l = map(int,sys.stdin.readline().split())
costs = list(map(int,sys.stdin.readline().split()))
p = product(costs,repeat=n)

for i in p:
print(i)
if (sum(i)%m) == 0:
c+=1

sys.stdout.write(str(c))
