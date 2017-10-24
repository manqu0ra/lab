import random

n=int(input()) #number of columns
m=int(input()) #number of lines
min=1001 #maximum of random + 1
A = [[0] * m for i in range(n)]
B = [[0] * (m-1) for i in range(n-1)]
for j in range(n):
    for h in range(m):
        A[j][h]=random.randint(1,50)
        
print('task 1:')
for row in A: 
    for elem in row: 
        print(elem, end=' ') 
    print()
print()

for h in range(m//2):#reversing
        A[0][h], A[0][m-1-h] = A[0][m-1-h], A[0][h]
        A[n-1][h], A[n-1][m-1-h] = A[n-1][m-1-h], A[n-1][h]

for h in range(m):#changing first and last lines
        A[0][h], A[n-1][h] = A[n-1][h], A[0][h]
        
print('task 2:')
for row in A: 
    for elem in row: 
        print(elem, end=' ') 
    print()
print()


for j in range(n):
    for h in range(m):
        if (A[j][h]<min):
            min=A[j][h]
            min_j=j
            min_h=h
            
for j in range(n):
    del A[j][min_h]

for h in range(m-1):
    del A[min_j][0]
    
for j in range(n-1):
    for h in range(m-1):
        if (j>=min_j):
            B[j][h]=A[j+1][h]
        else:
            B[j][h]=A[j][h]

print('first matrix:')
for row in B: 
    for elem in row: 
        print(elem, end=' ') 
    print()
print()

s = input()
sz = ','
c_col = s.count(sz)+1#counting collumns of list
s = s.replace(',', ' ,')
s = s.replace('.', ' .')
s1 = s.split(' ')
c_line = s1.index(',')#counting lines of list

C = [[0] * c_line for i in range(c_col)]

cc=0
i=0

for j in range(c_col):
    for h in range(c_line):
        if (s1[i+cc]==','):#avoiding commas
            cc+=1
        C[j][h]=s1[i+cc]#transforming into 2-d list
        i+=1
print('second matrix:')

for row in C: 
    for elem in row: 
        print(elem, end=' ') 
    print()
print()

if (c_col == m-1):#multiplication
    D=[[0] * (c_line) for i in range(n-1)]
    for j in range(n-1):
        for h in range(c_line):
            for g in range(c_col):
                D[j][h]=D[j][h]+int(B[j][g])*int(C[g][h])
                
    print('task 4:')
    for row in D: 
        for elem in row: 
            print(elem, end=' ') 
        print()
else:
    print('with the entered variables multiplication is impossible')
