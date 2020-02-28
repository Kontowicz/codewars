def openOrSenior(data):
    to_return = []
    for item in data:
        if item[0] >= 55 and item[1] > 7:
            to_return.append('Senior')
        else:
            to_return.append('Open')
    return to_return

assert openOrSenior([[45, 12],[55,21],[19, -2],[104, 20]]) ==['Open', 'Senior', 'Open', 'Senior']
assert openOrSenior([[16, 23],[73,1],[56, 20],[1, -1]]) == ['Open', 'Open', 'Senior', 'Open']
print('All tests pass.')

array = [[16, 23],[73,1],[56, 20],[1, -1]]
print(f'Input: {array}\tResult: {openOrSenior(array)}')
array = [[45, 12],[55,21],[19, -2],[104, 20]]
print(f'Input: {array}\tResult: {openOrSenior(array)}')