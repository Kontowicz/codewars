def solution(number):
    to_return = 0
    for i in range(1,number):
        if i % 3 == 0 or i % 5 == 0:
            to_return += i
          
    return to_return

assert solution(10) == 23
print('Test pass.')