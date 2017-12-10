a, b, c = input('Enter 3 values in format <<DATE MONTH YEAR>>: ').split()
a=int(a)
b=int(b)
c=int(c)
d=4
vis_flag = False
for i in range (1, c+1):
    d+=1
    if vis_flag == True:
        vis_flag = False
        d+=1        
    if (( i % 4 == 0)and( i % 100 != 0)) or (i % 400 == 0):
        vis_flag = True
    if d>7:
        d=d-7
for i in range (1, b+1):
    if b == 2:
        if vis_flag==True:
            d+=1 
    elif ((i == 2) or (i == 4) or (i == 6) or (i ==9) or (i == 11)):
        d+=2
    elif (i == 1):
        d+=0
    else:
        d+=3
    if d>7:
        d=d-7
for i in range (1, a+1):
    d+=1
    if d>7:
        d=d-7
if d == 1:
    print('Monday')
if d == 2:
    print('Tuesday')
if d == 3:
    print('Wednesday')
if d == 4:
    print('Thursday')
if d == 5:
    print('Friday')
if d == 6:
    print('Saturday')
if d == 7:
    print('Sunday')
