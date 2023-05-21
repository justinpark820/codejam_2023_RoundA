a = int(input())
for case_num in range(a):
    
    b = list(input())

    answer = 0

    temp = [1]
    cont = b[0]
    for i in range(1, len(b)):
        if cont == b[i]:
            temp[-1] += 1
        else :
            cont = b[i]
            temp.append(1)
    if b[0] == b[-1] and len(temp) != 1:
        temp[0] += temp[-1]
        temp.pop()

    for i in range(len(temp)):
        answer += temp[i] // 2
    if len(temp) == 1 and temp[0] % 2 == 1:
        answer += 1
    print("Case #%d: %s" % (case_num + 1, answer))
    