# https://leetcode.com/problems/add-digits/description/
# problem number 258 of leetcode.
# Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

import math

def addDigits(num):
    sum = 0; 
    while(num > 0):
        sum += math.floor(num % 10)
        num /= 10; 
    
    if(sum >= 10):
        return addDigits(sum)
    
    return sum


