import math
for i in range(2,100):
    insertion = 8*(i*i)
    merge = 64*i*math.log(i,10)
    print(i,insertion,merge)
    if(insertion > merge):
        break
   # if(8*(i*i) <= 64*i*(math.log(i,10))):
   #     print(i)
   #     break
