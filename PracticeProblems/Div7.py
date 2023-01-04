test = int(input())

for _ in range(test):
    n = int(input())
    
    if n%7==0:
        print(n)
        continue
    
    for i in range(len(str(n))):
        if i == 0: 
            start = 1
        else:
            start = 0
            
        done = False;
        while start < 10:    
            num = str(n)[:i] + str(start) + str(n)[i+1:]
            num = int(num)
            start+=1
            
            if num % 7 == 0:
                print(num)
                done = True;
                break
        
        if done:
            break
