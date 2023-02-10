import math

def shuffle(nums):
        result = []
        n = math.floor(len(nums)/2)
        i = 0
        while(i < n):
            result.append(nums[i])
            result.append(nums[n + i])
            i += 1
            
        return result

list = [1,2,3,4,5,6]
output = shuffle(list)
print(output)