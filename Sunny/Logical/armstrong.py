num = 153
temp = num
res = 0
while(temp > 0):
    remainder = int(temp % 10)
    res += int(remainder*remainder*remainder)
    temp //= 10
  
  
print(res , " = " , num)  
if(res == num):
    print("The number is armstrong number")
else:
    print("The number is not armstrong number")