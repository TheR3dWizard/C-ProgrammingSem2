x,y = 1,1
total = 79

for i in range(10):
    for j in range(10):
        if 6*i + 5*j == total:
            print(i,j)
            x,y = i,j
            