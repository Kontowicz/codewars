def countBits(n):
    cnt = 0
    
    while n != 0:
        cnt += n & 1
        n >>= 1
    
    return cnt

assert countBits(0) == 0
assert countBits(4) == 1
assert countBits(7) == 3
assert countBits(9) == 2
assert countBits(10) == 2

print('All tests pass.')