import math

def temp(num):
    return num * (num - 1) / 2
    
a = int(input())

for case_num in range(a):
    b = int(input())
    
    stand = math.sqrt(b / 13)
    floor_num = math.floor(stand)
    ceil_num = floor_num + 1
    
    standard = 0
    
    if temp(floor_num) <= b / 26 <= temp(floor_num + 1):
        standard = floor_num
    else :
        standard = ceil_num
    
    stand = b - temp(standard) * 26
    
    answer = math.ceil(stand / standard) - 1 + 65
    
    print("Case #%d: %s" % (case_num + 1, chr(answer)))
    