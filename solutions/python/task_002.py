def descending_order(num):
    n = []
    if num == 0:
        return 0
    while num != 0:
        n.append(num%10)
        num = num // 10
    n.sort(reverse=True)
    to_return = 0
    ten = 10**(len(n)-1)
    for i in n:
        to_return += (ten*i)
        ten = ten // 10
    
    
    return to_return

assert descending_order(0) == 0
assert descending_order(15) == 51
assert descending_order(123456789) == 987654321
print('Test pass.')