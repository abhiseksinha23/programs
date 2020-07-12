'''
# Sample code to perform I/O:

name = input()                  # Reading input from STDIN
print('Hi, %s.' % name)         # Writing output to STDOUT

# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''

# Write your code here
import sys
from itertools import permutations
n,m,l = input().split()
n = int(n)
m = int(m)
l = int(l)
arr = list(map(int, input().split()))
for i in range(l):
    j=0
    while j<n-1:
        arr.append(arr[i])
        j+=1
s =0 
x = list(set(permutations(arr,n)))
for i in range(len(x)):
    total=0
    for j in range(len(x[i])):
        total+=x[i][j]
    if total%m==0:
        s+=1
print(s%1000000007)
    


